/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:46:27 by wrickard          #+#    #+#             */
/*   Updated: 2021/08/04 18:46:27 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	char	*str;
	size_t	len;

	if (!s)
		return (NULL);
	while (ft_strchr(set, *s) != 0 && *s)
		s++;
	len = ft_strlen(s);
	while (ft_strchr(set, s[len]) != 0 && len > 0)
		len--;
	str = ft_substr(s, 0, len + 1);
	if (!str)
		return (NULL);
	return (str);
}
