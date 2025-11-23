/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancheab <ancheab@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 23:18:40 by ancheab           #+#    #+#             */
/*   Updated: 2025/10/19 23:18:56 by ancheab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	dlen = 0;
	slen = 0;
	if (!dst)
		return (0);
	while (dst[dlen] && dlen < size)
		dlen++;
	while (src[slen])
		slen++;
	if (dlen == size)
		return (size + slen);
	i = 0;
	while (src[i] && (dlen + i + 1) < size)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	if (dlen + i < size)
		dst[dlen + i] = '\0';
	return (dlen + slen);
}
