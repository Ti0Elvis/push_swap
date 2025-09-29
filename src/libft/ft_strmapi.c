/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evera <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 14:56:01 by evera             #+#    #+#             */
/*   Updated: 2025/01/03 15:25:00 by evera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str_buffer;

	i = 0;
	str_buffer = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (str_buffer < str)
	{
		return (NULL);
	}
	if (!str || !f)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		str_buffer[i] = f(i, str[i]);
		i++;
	}
	str_buffer[i] = '\0';
	return (str_buffer);
}
