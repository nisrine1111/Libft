/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachabi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 02:11:15 by nachabi-          #+#    #+#             */
/*   Updated: 2024/11/11 23:14:55 by nachabi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*mylst;

	if (lst && del)
	{
		while (*lst)
		{
			mylst = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = mylst;
		}
		*lst = NULL;
	}
}
/*void	del(void *content)
{
	free(content);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list *list = ft_lstnew(ft_strdup("Node 1"));
	list->next = ft_lstnew(ft_strdup("Node 2"));
	list->next->next = ft_lstnew(ft_strdup("Node 3"));

	printf("List before ft_lstclear:\n");
	print_list(list);

	ft_lstclear(&list, del);

	if (list == NULL)
		printf("List after ft_lstclear: NULL (successfully cleared)\n");
	else
		printf("List after ft_lstclear: Not NULL (failed to clear)\n");

	return (0);
}*/
