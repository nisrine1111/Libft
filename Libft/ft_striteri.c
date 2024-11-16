/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachabi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:00:31 by nachabi-          #+#    #+#             */
/*   Updated: 2024/11/13 20:46:21 by nachabi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	touper(unsigned int i, char *c)
{
	unsigned int	i;

	(void)i;
	if (*c >= 97 && *c <= 122)
		*c -= 32;
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*int main()
{
	char s[] = "hey nis ach";
	ft_striteri(s, touper);
	printf("%s", s);
	return (0);
}*/
