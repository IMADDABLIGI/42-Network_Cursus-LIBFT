/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:04:44 by idabligi          #+#    #+#             */
/*   Updated: 2022/10/21 17:10:00 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (*(s + i) == c)
		{
			return ((char *) s + i);
		}
		i++;
	}
	return (0);
}
