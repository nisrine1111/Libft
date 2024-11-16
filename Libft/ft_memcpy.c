/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachabi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:41:24 by nachabi-          #+#    #+#             */
/*   Updated: 2024/11/10 22:00:10 by nachabi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ds;
	const unsigned char	*sr;

	ds = (unsigned char *)dst;
	sr = (const unsigned char *)src;
	while (n > 0)
	{
		*ds++ = *sr++;
		n--;
	}
	return (dst);
}
