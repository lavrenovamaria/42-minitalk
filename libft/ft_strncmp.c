/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:46:16 by wrickard          #+#    #+#             */
/*   Updated: 2021/08/04 18:56:29 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t count_size)
{
	size_t	i;

	i = 0;
	if (count_size == 0)
		return (0);
	while (*str1 != '\0' && (*str1 == *str2) && (i < count_size - 1))
	{
		str1++;
		str2++;
		count_size--;
	}
	return ((unsigned char)*str1 - *str2);
}
