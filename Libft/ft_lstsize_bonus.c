/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachabi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 22:38:30 by nachabi-          #+#    #+#             */
/*   Updated: 2024/11/11 19:59:37 by nachabi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*int main()
{
	t_list	n1, n2, n3;
	t_list	*head;
	int		c;

	head = &n1;
	n1.content = "qwerty";
	n1.next = &n2;
	n2.content = "azerty";
	n2.next = &n3;
	n3.content = "ach";
	n3.next = NULL;
	c = ft_lstsize(head);
	printf("%d\n", c);
	return (0);
}*/
