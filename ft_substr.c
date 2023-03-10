/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:59:16 by idabligi          #+#    #+#             */
/*   Updated: 2022/10/21 17:12:46 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	len_s;

	if (!s)
		return (0);
	len_s = ft_strlen(s) - 1;
	if (start > len_s)
		return ((char *)ft_calloc(1, sizeof(char)));
	if (len > len_s - start)
	{
		len = len_s - start + 1;
		ptr = (char *)malloc((len + 1) * sizeof(char));
	}
	else
		ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (0);
	ft_memcpy(ptr, s + start, len);
	ptr[len] = '\0';
	return (ptr);
}
