/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:41:52 by istasheu          #+#    #+#             */
/*   Updated: 2024/07/26 15:44:31 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				is_negative;
	long long		number;

	is_negative = 1;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*(str++) == '-')
			is_negative = -1;
	}
	while (*str >= 48 && *str <= 57)
	{
		number = number * 10 + (*(str++) - '0');
		if (number < 0)
		{
			if (is_negative > 0)
				return (-1);
			return (0);
		}
	}
	return ((int)number * is_negative);
}
