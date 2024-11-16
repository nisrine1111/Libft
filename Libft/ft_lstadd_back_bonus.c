/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachabi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:51:56 by nachabi-          #+#    #+#             */
/*   Updated: 2024/11/12 23:52:30 by nachabi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	last = ft_lstlast(*lst);
	if (!last)
	{
		*lst = new;
		return ;
	}
	last->next = new;
}
/*int main()
{
	t_list	n1, n2, n3;
	t_list	*head;
	t_list	*new;

	new = &n3;
	head = &n1;
	n1.content = "qwerty";
	n1.next = &n2;
	n2.content = "azerty";
	n2.next = NULL;
	n3.content = "nis";
	n3.next = NULL;
	ft_lstadd_back(&head, new);
	while (head)
	{
		printf("%s -> ",(char *)head->content);
		head = head->next;
	}
	printf("NULL\n");
	return (0);
}*/
