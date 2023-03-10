/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:43:38 by idabligi          #+#    #+#             */
/*   Updated: 2022/10/21 17:07:34 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst && !src)
		return (0);
	i = len - 1;
	if (src < dst)
	{
		while (i >= 0)
		{
			*((unsigned char *)dst + i) = *((unsigned char *)src + i);
			i--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
