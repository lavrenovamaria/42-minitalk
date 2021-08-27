/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:46:19 by wrickard          #+#    #+#             */
/*   Updated: 2021/08/04 18:46:19 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big_str, const char *lit_str, size_t len)
{
	size_t	lit_len;

	lit_len = ft_strlen(lit_str);
	if (*lit_str == '\0')
		return ((char *)big_str);
	while ((*big_str != '\0') && lit_len <= len--)
	{
		if ((*big_str == *lit_str) && \
				ft_strncmp(big_str, lit_str, lit_len) == 0)
			return ((char *)big_str);
		big_str++;
	}
	return (0);
}
