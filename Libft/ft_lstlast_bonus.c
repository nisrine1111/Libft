/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachabi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:23:37 by nachabi-          #+#    #+#             */
/*   Updated: 2024/11/11 20:05:00 by nachabi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*int main()
{
	t_list l1, l2, l3;
	t_list  *lastlst;

	l1.content = "nis";
	l1.next = &l2;
	l2.content = "ach";
	l2.next = &l3;
	l3.content = "hell";
	l3.next = NULL;
	lastlst = ft_lstlast(&l1);
	if (lastlst)
		printf("%s\n%p\n", (char *)lastlst -> content, lastlst -> next);
	return (0);
}*/
