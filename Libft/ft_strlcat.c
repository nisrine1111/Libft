/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachabi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 01:04:13 by nachabi-          #+#    #+#             */
/*   Updated: 2024/11/13 16:56:53 by nachabi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dsts;
	size_t	srcs;
	size_t	i;
	size_t	j;

	srcs = ft_strlen(src);
	if (!dstsize && !dst)
		return (srcs);
	dsts = ft_strlen(dst);
	i = dsts;
	j = 0;
	if (dsts >= dstsize)
		return (dstsize + srcs);
	while (src[j] && (i < dstsize - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dsts + srcs);
}
