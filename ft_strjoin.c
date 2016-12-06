/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikryvenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 21:28:23 by ikryvenk          #+#    #+#             */
/*   Updated: 2016/12/02 19:55:02 by ikryvenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	size_t	len;

	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		tmp = ft_strnew(len);
		if (!tmp)
			return (NULL);
		len = 0;
		while (*s1)
			tmp[len++] = *(s1++);
		while (*s2)
			tmp[len++] = *(s2++);
		tmp[len] = 0;
		return (tmp);
	}
	return (NULL);
}
