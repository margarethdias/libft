/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:44:15 by mdias             #+#    #+#             */
/*   Updated: 2023/07/24 19:52:30 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	while (src[i] && dst_len + i + 1 < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	if (size < dst_len)
		return (src_len + size);
	else
		return (src_len + dst_len);
}

// #include <stdio.h>
// #include <bsd/string.h>
// int main()
// {
//     char dest[20] = "Hello";
//     char src[10] = " World";
// 	char dest2[20] = "Hello";
//     char src2[10] = " World";
//     unsigned int size = 20;
// 	printf("String original: %s\n", dest);
//     printf("String a ser concatenada: %s\n", src);
//     unsigned int result = ft_strlcat(dest, src, size);
//     printf("String resultante: %s\n", dest);
//     printf("Comprimento total: %u\n", result);
// 	unsigned int result2 = strlcat(dest2, src2, size);
// 	printf("Comprimento total: %u\n", result2);
// 	return 0;
// }