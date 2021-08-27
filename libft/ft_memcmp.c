/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:45:13 by wrickard          #+#    #+#             */
/*   Updated: 2021/08/04 18:56:29 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const char *buff1, const char *buff2, size_t len)
{
	unsigned char	*p;
	unsigned char	*q;

	p = (unsigned char *)buff1;
	q = (unsigned char *)buff2;
	while (len--)
	{
		if (*p != *q)
		{
			return (*p - *q);
		}
		else
		{
			p++;
			q++;
		}
	}
	return (0);
}
