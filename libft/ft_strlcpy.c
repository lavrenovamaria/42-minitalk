/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:46:03 by wrickard          #+#    #+#             */
/*   Updated: 2021/08/04 18:56:29 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	offset;
	unsigned int	i;

	i = 0;
	if (!dst && !src)
		return (0);
	offset = ft_strlen(src);
	if (size == 0)
		return (offset);
	if (size > 0)
	{
		while (*src && (size - 1) > i)
		{
			*dst = *src;
			dst++;
			src++;
			i++;
		}
	}
	*dst = '\0';
	return (offset);
}
