/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meg <meg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:03:50 by mdias             #+#    #+#             */
/*   Updated: 2023/07/29 15:55:30 by meg              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*allocd_mem;

	total_size = nmemb * size;
	if (!(allocd_mem = malloc(total_size)))
		return (NULL);
	ft_bzero(allocd_mem, total_size);
	return (allocd_mem);
}
