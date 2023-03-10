/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:39:00 by idabligi          #+#    #+#             */
/*   Updated: 2022/11/01 10:51:46 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned long	rst;

	i = 0;
	rst = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		rst = rst * 10 + str[i++] - '0';
	}
	if (rst > 9223372036854775807 && sign == -1)
		return (0);
	if (rst > 9223372036854775807)
		return (-1);
	else
		return ((int)rst * sign);
}
