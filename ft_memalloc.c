/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikryvenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 16:08:51 by ikryvenk          #+#    #+#             */
/*   Updated: 2016/12/11 15:49:32 by ikryvenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*tmp;
	size_t	i;

	tmp = (void*)malloc(sizeof(void) * size);
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
