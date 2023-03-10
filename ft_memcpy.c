/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:22:58 by idabligi          #+#    #+#             */
/*   Updated: 2022/10/20 21:25:48 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src == dst)
		return (dst);
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
		i++;
	}
	return (dst);
}
