/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:46:23 by wrickard          #+#    #+#             */
/*   Updated: 2021/08/04 18:50:00 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	l_occ;

	l_occ = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + l_occ));
	s = s + l_occ;
	while (l_occ > 0 && *s != (char)c)
	{
		l_occ--;
		s--;
	}
	if (*s == (char)c)
		return ((char *)(s));
	return (NULL);
}
