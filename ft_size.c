/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:57:36 by istasheu          #+#    #+#             */
/*   Updated: 2024/06/26 13:12:35 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_size(void **arr)
{
	size_t	length;

	length = 0;
	while (arr[length] != NULL)
		length++;
	return (length);
}
