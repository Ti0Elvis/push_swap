/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evera <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:35:22 by evera             #+#    #+#             */
/*   Updated: 2025/01/03 08:01:44 by evera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *str1, const char *str2)
{
	size_t	len;
	char	*buffer;

	len = ft_strlen(str1) + ft_strlen(str2) + 1;
	buffer = malloc(len);
	if (!buffer)
	{
		return (NULL);
	}
	buffer[0] = '\0';
	ft_strlcat(buffer, str1, len);
	ft_strlcat(buffer, str2, len);
	return (buffer);
}
