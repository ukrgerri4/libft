/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikryvenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 19:28:42 by ikryvenk          #+#    #+#             */
/*   Updated: 2016/12/03 18:53:37 by ikryvenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int i;

	i = 0;
	while (s1[i])
		i++;
	while (*s2)
		s1[i++] = *(s2++);
	s1[i] = 0;
	return (s1);
}