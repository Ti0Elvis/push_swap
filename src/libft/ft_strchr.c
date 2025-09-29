/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evera <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 15:54:46 by evera             #+#    #+#             */
/*   Updated: 2025/01/05 18:11:13 by evera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			dest = (char *)&str[i];
			return (dest);
		}
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (dest);
}
