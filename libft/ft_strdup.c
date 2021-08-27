/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:45:51 by wrickard          #+#    #+#             */
/*   Updated: 2021/08/04 18:45:51 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	int		i;

	i = 0;
	while (*(src + i))
		i++;
	dst = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dst == NULL)
		return (NULL);
	while (i > 0)
	{
		*(dst + i) = *(src + i);
		i--;
	}
	*dst = *src;
	return (dst + i);
}
