/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstma_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachabi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 23:09:22 by nachabi-          #+#    #+#             */
/*   Updated: 2024/11/13 20:42:25 by nachabi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new_lst;
	t_list		*new_elem;
	void		*content;

	if (!f || !del || !lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_elem = ft_lstnew(content);
		if (!new_elem)
		{
			free(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}

/*
t_list *create_node(int value) {
    int *content = malloc(sizeof(int));
    if (!content)
        return NULL;
    *content = value;
    return ft_lstnew(content);
}

void	*multiply_by_two(void *content) {
    int	*value = (int *)content;
    int *new_value = malloc(sizeof(int));
    if (!new_value)
        return NULL;
    *new_value = (*value) * 2;
    return new_value;
}

void	delete_content(void *content) {
    free(content);
}

void	print_list(t_list *lst) {
    while (lst) {
        printf("%d -> ", *(int *)(lst->content));
        lst = lst->next;
    }
    printf("NULL\n");
}

int main()
{
    t_list *original_list = create_node(1);
    original_list->next = create_node(2);
    original_list->next->next = create_node(3);

    printf("Original list:\n");
    print_list(original_list);

    t_list *new_list = ft_lstmap(original_list, multiply_by_two, delete_content);

    printf("New list after applying ft_lstmap
	(each element multiplied by 2):\n");
    print_list(new_list);

    ft_lstclear(&original_list, delete_content);
    ft_lstclear(&new_list, delete_content);

    return 0;
}
*/
