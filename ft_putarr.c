/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putarr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikryvenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 00:30:58 by ikryvenk          #+#    #+#             */
/*   Updated: 2016/12/06 16:09:12 by ikryvenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putarr(char **arr)
{
	if (arr)
	{
		while (*arr)
		{
			ft_putstr(*(arr++));
			write(1, "\n", 1);
		}
	}
}