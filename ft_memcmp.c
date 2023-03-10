/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:07:57 by idabligi          #+#    #+#             */
/*   Updated: 2022/10/21 17:08:12 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;

	i = 0;
	if (n == 0)
		return (0);
	while (*(unsigned char *)s1 == *(unsigned char *)s2 && i < n - 1)
	{
		s1++;
		s2++;
		i++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
