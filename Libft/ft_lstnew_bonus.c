/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachabi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:24:25 by nachabi-          #+#    #+#             */
/*   Updated: 2024/11/12 23:41:10 by nachabi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*int main()
{
	t_list *my_node;
	int	cont = 1337;
	int *value;
	t_list *add;

	my_node = ft_lstnew(&cont);
	value = (int *)my_node -> content;
	add = my_node -> next;
	printf("%d\n%p\n", *value, add);
	return (0);
}*/
