/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikryvenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 16:08:51 by ikryvenk          #+#    #+#             */
/*   Updated: 2016/12/02 16:46:50 by ikryvenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*tmp;
	size_t	i;

	tmp = malloc(size);
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < size)
	{
		((unsigned char*)tmp)[i] = '\0';
		i++;
	}
	return (tmp);
}
