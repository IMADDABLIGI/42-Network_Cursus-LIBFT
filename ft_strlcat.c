/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:14:41 by idabligi          #+#    #+#             */
/*   Updated: 2022/10/21 17:09:30 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lsrc;
	size_t	ldst;
	size_t	i;

	lsrc = ft_strlen(src);
	if (!dst && !dstsize)
		return (lsrc);
	ldst = ft_strlen(dst);
	if (dstsize == 0 || ldst >= dstsize)
		return (dstsize + lsrc);
	i = 0;
	while (src[i] != '\0' && i < (dstsize - ldst - 1))
	{
		dst[ldst + i] = src[i];
		i++;
	}
	dst[ldst + i] = '\0';
	return (ldst + lsrc);
}
