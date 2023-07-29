/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:16:07 by mdias             #+#    #+#             */
/*   Updated: 2023/07/24 19:36:30 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!src && !dest)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char src[] = "Essa é a string original";
// 	char dest[100];
// 	ft_memcpy(dest, src, ft_strlen(src) + 1);
// 	printf("String de destino após a ft_memmove: %s\n", dest);
// 	memcpy(dest, src, ft_strlen(src) + 1);
// 	printf("String de destino após a memmove original: %s\n", dest);
// }