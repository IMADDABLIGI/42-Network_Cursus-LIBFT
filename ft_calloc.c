/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:48:50 by idabligi          #+#    #+#             */
/*   Updated: 2022/10/29 09:05:31 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p1;

	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	p1 = malloc(count * size);
	if (!p1)
		return (0);
	ft_bzero(p1, count * size);
	return (p1);
}
