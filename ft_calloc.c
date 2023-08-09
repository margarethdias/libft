/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:03:50 by mdias             #+#    #+#             */
/*   Updated: 2023/08/08 21:00:47 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*allocd_mem;

	total_size = nmemb * size;
	allocd_mem = malloc(total_size);
	if (!allocd_mem)
		return (NULL);
	ft_bzero(allocd_mem, total_size);
	return (allocd_mem);
}
