/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evera <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:54:54 by evera             #+#    #+#             */
/*   Updated: 2025/01/03 18:50:20 by evera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str_buffer;

	i = 0;
	if (!str || !set)
		return (NULL);
	while (str[i] != '\0')
	{
		if (ft_strchr(set, str[i]) == NULL)
			break ;
		i++;
	}
	j = ft_strlen(str) - 1;
	while (j != i)
	{
		if (ft_strchr(set, str[j]) == NULL)
			break ;
		j--;
	}
	str_buffer = ft_substr(str, (unsigned int)i, j - i + 1);
	if (!str_buffer)
		return (NULL);
	return (str_buffer);
}
