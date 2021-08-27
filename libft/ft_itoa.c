/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:45:02 by wrickard          #+#    #+#             */
/*   Updated: 2021/08/04 18:45:02 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_size(long nbr)
{
	size_t	i;

	i = 0;
	if (nbr <= 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr > 0)
	{
		i++;
		nbr /= 10;
	}
	return (i);
}

char	*ft_itoa(int tmp)
{
	size_t	len;
	char	*str;
	long	nbr;

	nbr = (long)tmp;
	len = ft_size(nbr);
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (0);
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		str[len - 1] = (nbr % 10) + 48;
		nbr /= 10;
		len--;
	}
	return (str);
}
