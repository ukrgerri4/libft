/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikryvenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 00:47:54 by ikryvenk          #+#    #+#             */
/*   Updated: 2016/12/02 17:19:21 by ikryvenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*split_c_from_start(const char *s, char c)
{
	const char *tmp;

	if (s)
	{
		tmp = s;
		while (*tmp == c)
			tmp++;
		return (tmp);
	}
	else
		return (NULL);
}

static int			count_words(const char *s, char c)
{
	int i;

	i = 0;
	while (*s)
	{
		while (*s != c)
			s++;
		i++;
		s = split_c_from_start(s, c);
	}
	return (i);
}

static char			**make_arr(const char *s, char c)
{
	char		**arr;
	char		**buf;
	const char	*tmp;
	int			i;

	arr = ft_memalloc(sizeof(arr) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	buf = arr;
	while (*s)
	{
		tmp = s;
		i = 0;
		while (*s != c && *s)
		{
			i++;
			s++;
		}
		*(buf++) = ft_strsub(tmp, 0, i);
		if (*s)
			s = split_c_from_start(s, c);
	}
	*(buf) = 0;
	return (arr);
}

char				**ft_strsplit(char const *s, char c)
{
	if (s)
		s = split_c_from_start(s, c);
	else
		return (NULL);
	return (make_arr(s, c));
}
