/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:09:06 by mdias             #+#    #+#             */
/*   Updated: 2023/08/08 22:12:05 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	srclen;
	size_t	i;
	size_t	j;

	srclen = ft_strlen(s);
	if (!s)
		return (0);
	if (start >= srclen)
		return (ft_calloc(1, 1));
	if (len > srclen)
		len = srclen - start + 1;
	new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (0);
	i = start;
	j = 0;
	while (i < srclen && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}
