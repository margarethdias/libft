/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:06:53 by mdias             #+#    #+#             */
/*   Updated: 2023/08/02 18:06:57 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concatd_str;
	size_t	size_str;

	size_str = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(concatd_str = (char *)malloc(size_str)))
		return (NULL);
	ft_memcpy(concatd_str, s1, size_str);
	ft_strlcat (concatd_str, s2, size_str);
	return (concatd_str);
}
