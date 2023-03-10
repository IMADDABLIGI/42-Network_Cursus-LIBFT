/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:42:04 by idabligi          #+#    #+#             */
/*   Updated: 2022/10/28 20:57:25 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	size_t	lens1;
	size_t	lens2;
	size_t	mix;

	if (!s1 && !s2)
		return (0);
	if (!s1)
		s1 = ft_strdup("");
	if (!s2)
		s2 = ft_strdup("");
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	mix = ft_strlen(s1) + ft_strlen(s2);
	string = malloc((mix + 1) * sizeof(char));
	if (!string)
		return (0);
	ft_memcpy(string, s1, lens1);
	ft_memcpy(string + lens1, s2, lens2);
	string[mix] = '\0';
	return (string);
}
