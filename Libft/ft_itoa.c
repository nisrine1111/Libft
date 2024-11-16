/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachabi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:27:00 by nachabi-          #+#    #+#             */
/*   Updated: 2024/11/13 00:43:57 by nachabi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digcount(int n)
{
	int		i;
	long	nbr;

	nbr = n;
	i = 0;
	if (nbr <= 0)
	{
		nbr = -nbr;
		i++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

static char	*allocate_ascii(int n, int dc)
{
	char	*ascii;

	ascii = malloc((dc + 1) * sizeof(char));
	if (!ascii)
		return (NULL);
	ascii[dc] = '\0';
	if (n == 0)
		ascii[0] = '0';
	return (ascii);
}

char	*ft_itoa(int n)
{
	int		dc;
	char	*ascii;
	long	nb;

	nb = n;
	dc = digcount(n);
	ascii = allocate_ascii(n, dc);
	if (!ascii)
		return (NULL);
	if (n == 0)
		return (ascii);
	if (nb < 0)
	{
		ascii[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		ascii[--dc] = (nb % 10) + '0';
		nb /= 10;
	}
	return (ascii);
}
/*int	main(void)
{
	int	n;

	n = -897455;
	printf("%s", ft_itoa(n));
	return (0);
}*/
