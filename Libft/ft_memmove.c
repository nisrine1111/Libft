/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachabi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:04:59 by nachabi-          #+#    #+#             */
/*   Updated: 2024/11/10 23:21:53 by nachabi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ds;
	const unsigned char	*sr;

	ds = (unsigned char *)dst;
	sr = (unsigned const char *)src;
	if (sr < ds && ds < sr + len)
	{
		sr += len;
		ds += len;
		while (len--)
		{
			*(--ds) = *(--sr);
		}
	}
	else
	{
		while (len--)
			*ds++ = *sr++;
	}
	return (dst);
}
/*int main()
{
	char dst[20];
	char src[] = "hey memmove";

	printf("%s\n", dst);
	ft_memmove(dst, src, 9);
	printf("%s\n", dst);
	return (0);
}*/
