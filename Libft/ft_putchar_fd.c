/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachabi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:23:51 by nachabi-          #+#    #+#             */
/*   Updated: 2024/11/11 18:59:49 by nachabi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <fcntl.h>    // for open
//#include <unistd.h>   // for close

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int main()
{
	//ft_putchar_fd('n', 1);
	int fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		return (1); // error opening file
	}
	ft_putchar_fd('B', fd); // Should write "B" to the file "test_output.txt"
	close(fd);
	return (0);
}*/
