/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evera <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:50:54 by evera             #+#    #+#             */
/*   Updated: 2025/01/03 14:54:24 by evera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_size(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			size;
	long int	nb;
	char		*buffer;

	nb = n;
	size = ft_get_size(nb);
	buffer = malloc(sizeof(char) * (size + 1));
	buffer[size] = '\0';
	if (n == 0)
	{
		buffer[0] = '0';
	}
	while (nb != 0)
	{
		if (nb < 0)
		{
			buffer[0] = '-';
			nb *= -1;
		}
		size--;
		buffer[size] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (buffer);
}
