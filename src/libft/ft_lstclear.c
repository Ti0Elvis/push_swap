/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evera <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 16:39:46 by evera             #+#    #+#             */
/*   Updated: 2025/01/03 18:17:31 by evera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	node = NULL;
	while (*lst != NULL)
	{
		node = (*lst)->next;
		(del)((*lst)->content);
		free(*lst);
		*lst = node;
	}
	*lst = NULL;
}
