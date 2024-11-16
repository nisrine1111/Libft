/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachabi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:33:01 by nachabi-          #+#    #+#             */
/*   Updated: 2024/11/10 18:59:57 by nachabi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}
/*int main()
{
	char arr[13] = "n2 @3ach";

	printf("%s\n", arr);
	ft_bzero(arr, 4);
	for (int i = 0; i < 4; i++)
	{
		printf("%d", arr[i]);
	}
	return (0);
}*/
