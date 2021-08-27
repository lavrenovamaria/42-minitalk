/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:45:17 by wrickard          #+#    #+#             */
/*   Updated: 2021/08/04 18:45:17 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t count)
{
	unsigned char	*dt;
	unsigned char	*sc;

	dt = (unsigned char *)dst;
	sc = (unsigned char *)src;
	if (dst == src || count == 0)
		return (dst);
	while (count--)
		*dt++ = *sc++;
	return (dst);
}
