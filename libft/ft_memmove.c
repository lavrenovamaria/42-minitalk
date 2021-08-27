/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:45:21 by wrickard          #+#    #+#             */
/*   Updated: 2021/08/04 18:45:21 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t count)
{
	unsigned char	*dt;
	unsigned char	*sc;

	dt = (unsigned char *)dst;
	sc = (unsigned char *)src;
	if (dt == NULL && sc == NULL)
		return (NULL);
	if (dst > src)
	{
		while (count != 0)
		{
			--count;
			*(dt + count) = *(sc + count);
		}
	}
	else if (dst < src)
	{
		while (count--)
		{
			*(dt) = *(sc);
			dt++;
			sc++;
		}
	}
	return (dst);
}
