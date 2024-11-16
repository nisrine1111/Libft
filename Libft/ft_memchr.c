/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachabi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:17:17 by nachabi-          #+#    #+#             */
/*   Updated: 2024/11/10 21:48:46 by nachabi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		ch;

	ptr = (const unsigned char *)s;
	ch = (unsigned char)c;
	while (n--)
	{
		if (*ptr == ch)
		{
			return ((void *)ptr);
		}
		ptr++;
	}
	return (NULL);
}
/*int main()
{
	char s[] = "nisrine";
	printf("%p\n", ft_memchr(s, 's', 6));
	return (0);
}*/
