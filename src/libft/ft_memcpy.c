/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evera <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 17:02:42 by evera             #+#    #+#             */
/*   Updated: 2024/12/28 17:06:37 by evera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_buffer;
	const unsigned char	*src_buffer;

	i = 0;
	dest_buffer = (unsigned char *)dest;
	src_buffer = (const unsigned char *)src;
	while (i < n)
	{
		dest_buffer[i] = src_buffer[i];
		i++;
	}
	return (dest);
}
