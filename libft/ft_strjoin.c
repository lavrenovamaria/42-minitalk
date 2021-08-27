/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:45:56 by wrickard          #+#    #+#             */
/*   Updated: 2021/08/04 18:45:56 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*res;
	size_t	str_len1;
	size_t	str_len2;

	if (!str1 || !str2)
		return (NULL);
	str_len1 = ft_strlen(str1);
	str_len2 = ft_strlen(str2);
	res = (char *)malloc(sizeof(char) * (str_len1 + str_len2 + 1));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, str1, (str_len1 + 1));
	ft_strlcat(res, str2, (str_len1 + str_len2 + 1));
	return (res);
}
