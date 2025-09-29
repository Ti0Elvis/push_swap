/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evera <evera@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:18:29 by evera             #+#    #+#             */
/*   Updated: 2025/09/23 15:05:48 by evera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*buffer;

	buffer = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (buffer[i] == (unsigned char)c)
			return ((void *)&buffer[i]);
		i++;
	}
	return (NULL);
}
