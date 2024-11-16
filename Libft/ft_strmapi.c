/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachabi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:18:35 by nachabi-          #+#    #+#             */
/*   Updated: 2024/11/13 20:45:41 by nachabi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*int main()
{
	char *res = ft_strmapi("nisrine ach", ftoupper);

	printf("%s", res);
	free(res);
	return (0);
}*/

/*char	ftoupper(unsigned int i, char c)
{
	unsigned int	i;
	char			*str;

	(void)i;
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}*/
