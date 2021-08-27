/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:58:00 by wrickard          #+#    #+#             */
/*   Updated: 2021/08/04 18:58:00 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk_bonus.h"
#include "../libft/libft.h"

void	ft_handler(int signo, siginfo_t *siginfo, void *unused)
{
	static unsigned char		bukva = 0;
	static int					count = 0;

	(void)unused;
	if (signo == SIGUSR1)
		bukva |= (1 << count);
	count++;
	if (count == 8)
	{
		ft_putchar_fd(bukva, 1);
		count = 0;
		bukva = 0;
		if (kill(siginfo->si_pid, SIGUSR1) == -1)
			ft_putstr_fd("Error signal", 1);
	}
}

int	main(void)
{
	struct sigaction	act;

	act.sa_sigaction = &ft_handler;
	act.sa_flags = SA_SIGINFO;
	sigemptyset(&act.sa_mask);
	sigaddset(&act.sa_mask, SIGUSR1);
	sigaddset(&act.sa_mask, SIGUSR2);
	if ((sigaction(SIGUSR1, &act, 0)) == -1)
		ft_putstr_fd("Error sigaction\n", 1);
	if ((sigaction(SIGUSR2, &act, 0)) == -1)
		ft_putstr_fd("Error sigaction\n", 1);
	ft_putstr_fd("Server started successfully and now waiting for client\n", 1);
	ft_putstr_fd("PID is: ", 1);
	ft_putnbr_fd(getpid(), 1);
	write(1, "\n", 1);
	while (1)
		pause();
	return (0);
}
