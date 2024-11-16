/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachabi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 03:03:33 by nachabi-          #+#    #+#             */
/*   Updated: 2024/11/11 23:18:51 by nachabi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
/*int main()
{
	t_list	n1, n2;

	t_list	*head;
	head = &n1;
	n1.content = "nis";
	n1.next = &n2;
	n2.content = "ach";
	n2.next = NULL;
	ft_lstiter(head, print_content);
	return (0);
}*/
