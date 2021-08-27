/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:45:59 by wrickard          #+#    #+#             */
/*   Updated: 2021/08/04 18:45:59 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s_len;
	size_t	d_len;
	size_t	offset;
	size_t	src_i;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	offset = d_len;
	src_i = 0;
	if (size < d_len)
		return (size + s_len);
	while ((*(src + src_i)) && (src_i + d_len + 1 < size))
	{
		*(dst + offset) = (src[src_i]);
		src_i++;
		offset++;
	}
	*(dst + offset) = '\0';
	return (d_len + s_len);
}
