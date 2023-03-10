/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:09:01 by idabligi          #+#    #+#             */
/*   Updated: 2022/10/21 17:43:33 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	void	*ptr;

	i = 0;
	ptr = b;
	while (i < len)
	{
		*(unsigned char *)ptr++ = (unsigned char)c;
		i++;
	}
	return (b);
}
