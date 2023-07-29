/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:15:40 by mdias             #+#    #+#             */
/*   Updated: 2023/07/24 19:38:27 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char src[] = "Hello";
// 	char dest[5];
// 	printf("String de origem: %s\n", src);
// 	unsigned int length = ft_strlcpy(dest, src, 4);
// 	printf("String de destino: %s\n", dest);
// 	printf("Comprimento da string de origem: %u\n", length);
// 	return 0;
// }