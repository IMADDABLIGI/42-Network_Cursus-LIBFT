/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:45:31 by idabligi          #+#    #+#             */
/*   Updated: 2022/10/21 17:13:09 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	cheekc(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	total;
	char	*ptr;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (start <= end && cheekc(s1[start], set) == 1)
		start++;
	while (end > start && cheekc(s1[end], set) == 1)
		end--;
	total = (end - start) + 1;
	ptr = (char *)malloc((total + 1) * sizeof(char));
	if (!ptr)
		return (0);
	ft_memcpy(ptr, s1 + start, total);
	ptr[total] = '\0';
	return (ptr);
}
