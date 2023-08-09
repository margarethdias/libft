/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:07:01 by mdias             #+#    #+#             */
/*   Updated: 2023/08/09 19:20:18 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;
	
	if (!*lst)
		*lst = new;
	else 
	{
		node = *lst;
		while (node->next)
			node = node->next;
		node->next = new;
	}
}
