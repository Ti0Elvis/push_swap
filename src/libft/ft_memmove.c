/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evera <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 14:54:05 by evera             #+#    #+#             */
/*   Updated: 2025/01/03 07:18:28 by evera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_buffer;
	const unsigned char	*src_buffer;

	if (src == NULL && dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	dest_buffer = (unsigned char *)dest;
	src_buffer = (const unsigned char *)src;
	while (i < n)
	{
		if (dest_buffer < src_buffer)
		{
			dest_buffer[i] = src_buffer[i];
		}
		else
		{
			dest_buffer[n - i - 1] = src_buffer[n - i - 1];
		}
		i++;
	}
	return (dest);
}
