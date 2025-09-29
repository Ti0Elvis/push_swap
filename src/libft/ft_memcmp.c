/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evera <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:41:13 by evera             #+#    #+#             */
/*   Updated: 2025/01/03 07:31:40 by evera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*str1_buffer;
	unsigned char	*str2_buffer;

	i = 0;
	str1_buffer = (unsigned char *)str1;
	str2_buffer = (unsigned char *)str2;
	while ((str1_buffer[i] != '\0' || str2_buffer[i] != '\0') && i < n)
	{
		if (str1_buffer[i] != str2_buffer[i])
		{
			return (str1_buffer[i] - str2_buffer[i]);
		}
		i++;
	}
	return (0);
}
