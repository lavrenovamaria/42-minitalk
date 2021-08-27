/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:57:56 by wrickard          #+#    #+#             */
/*   Updated: 2021/08/04 18:57:56 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"
#include "../libft/libft.h"

void	handler(int signo, siginfo_t *siginfo, void *unused)
{
	(void)unused;
	(void)siginfo;
	(void)signo;
}

void	bit_by_bit(int pid, int bit)
{
	int	counter;

	counter = 0;
	while (counter <= 7)
	{
		if ((bit >> counter) & 1)
		{
			if (kill(pid, SIGUSR1) == -1)
				ft_putstr_fd("Error signal\n", 1);
		}
		else
		{
			if (kill(pid, SIGUSR2) == -1)
				ft_putstr_fd("Error signal\n", 1);
		}
		counter++;
		usleep(100);
	}
}

void	send_bit(int pid, char *msg)
{
	struct sigaction	act;
	siginfo_t			siginfo;
	int					i;

	act.sa_flags = SA_SIGINFO;
	act.sa_sigaction = &handler;
	sigemptyset(&act.sa_mask);
	sigaction(SIGUSR1, &act, 0);
	siginfo.si_pid = pid;
	i = 0;
	while (msg[i] != '\0')
	{
		bit_by_bit(pid, msg[i++]);
	}
	ft_putstr_fd("===Message received===\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		send_bit(ft_atoi(argv[1]), argv[2]);
	else
		return (write(0, "3 arguments must be passed: \
			[0]./client[1]PID[2]message\n", 56));
	return (0);
}
