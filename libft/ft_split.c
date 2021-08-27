/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:45:44 by wrickard          #+#    #+#             */
/*   Updated: 2021/08/04 18:45:44 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbr_word(const char *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str != c && *str != '\0')
			count++;
		while (*str != c && *str)
			str++;
	}
	return (count);
}

void	ft_free_mem(char **mem)
{
	int	i;

	i = 0;
	while (mem[i])
	{
		free(mem[i]);
		i++;
	}
	free(mem);
}

size_t	ft_word_len(const char *str, char c)
{
	int	i;

	i = 0;
	while (*str == c)
		str++;
	while (*str && *str != c)
	{
		i++;
		str++;
	}
	return (i);
}

char	**ft_pre_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**str;

	if (!s)
		return (NULL);
	i = ft_nbr_word(s, c);
	str = ft_calloc(i + 1, sizeof(char *));
	if (str == NULL)
		return (NULL);
	j = 0;
	while (i > j)
	{
		while (*s == c)
			s++;
		str[j] = ft_substr (s, 0, ft_word_len (s, c));
		if (str[j++] == NULL)
		{
			ft_free_mem(str);
			return (NULL);
		}
		s += ft_word_len (s, c);
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = ft_pre_split (s, c);
	if (!str)
		return (NULL);
	return (str);
}
