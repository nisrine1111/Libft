/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachabi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:57:39 by nachabi-          #+#    #+#             */
/*   Updated: 2024/11/11 19:53:38 by nachabi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*int main()
{
	t_list	n1, n2, n3;
	t_list	*newn;
	t_list	*head;

	head = &n1;
	n1.content = "qwerty";
	n1.next = &n2;
	n2.content = "azerty";
	n2.next = &n3;
	n3.content = "ach";
	n3.next = NULL;
	newn = malloc(sizeof(t_list));
	if (!newn)
		return (1);
	newn->content = "nis";
	newn->next = NULL;
	ft_lstadd_front(&head, newn);
	while (head)
	{
		printf("%s -> ",(char *)head->content);
		head = head->next;
	}
	printf("NULL\n");
	return (0);
}*/
