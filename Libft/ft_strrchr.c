/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachabi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:13:38 by nachabi-          #+#    #+#             */
/*   Updated: 2024/11/13 16:19:12 by nachabi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s);
	str = (char *)s + len;
	if (*str == (char)c)
		return (str);
	str--;
	while (str >= s)
	{
		if (*str == (char)c)
			return (str);
		str--;
	}
	return (NULL);
}
