/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:23:29 by idabligi          #+#    #+#             */
/*   Updated: 2022/10/21 17:09:14 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	size;
	char	*ptr;

	i = 0;
	size = ft_strlen(s1);
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (0);
	ft_memcpy(ptr, s1, size);
	ptr[size] = '\0';
	return (ptr);
}
