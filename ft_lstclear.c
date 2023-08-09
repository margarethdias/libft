/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:27:52 by mdias             #+#    #+#             */
/*   Updated: 2023/08/09 19:48:48 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current_node;

	if (!lst || !del)
		return ;
	current_node = *lst;
	while (*lst != NULL)
	{
		current_node = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(current_node, del);
	}
}
