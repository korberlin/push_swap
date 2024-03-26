/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoksal <gkoksal@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:53:07 by gkoksal           #+#    #+#             */
/*   Updated: 2024/03/04 11:53:39 by gkoksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(s1);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, len + 1);
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	if (len >= s_len)
		len = s_len - start;
	i = 0;
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	wordc;
	size_t	i;

	i = 0;
	wordc = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] && s[i] != c)
			{
				i++;
			}
			wordc += 1;
		}
	}
	return (wordc);
}

static void	ft_fillarray(char const *s, char c, size_t len_arr, char **arr)
{
	size_t		ind;
	char const	*word_start;

	ind = 0;
	while (*s && ind < len_arr)
	{
		while (*s && *s == c)
			s++;
		word_start = s;
		while (*s && *s != c)
			s++;
		if (s > word_start)
		{
			arr[ind] = ft_substr(word_start, 0, s - word_start);
			ind++;
		}
	}
	arr[ind] = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	len_arr;
	char	**arr;

	len_arr = ft_wordcount(s, c);
	arr = malloc(sizeof(char *) * (len_arr + 1));
	if (!arr)
		return (NULL);
	ft_fillarray(s, c, len_arr, arr);
	return (arr);
}
