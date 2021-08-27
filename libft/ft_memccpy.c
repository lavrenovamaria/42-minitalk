/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:45:06 by wrickard          #+#    #+#             */
/*   Updated: 2021/08/04 18:45:06 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int last_symbol, size_t count)
{
	unsigned char	*dt;
	unsigned char	*sc;
	size_t			i;

	if (dst == NULL && src == NULL)
		return (NULL);
	dt = (unsigned char *)dst;
	sc = (unsigned char *)src;
	i = 0;
	while (i < count)
	{
		dt[i] = sc[i];
		if (dt[i] == (unsigned char)last_symbol)
			return ((void *)(dst + i + 1));
		i++;
	}
	return (NULL);
}
