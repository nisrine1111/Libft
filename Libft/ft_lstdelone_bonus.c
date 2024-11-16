/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachabi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:48:05 by nachabi-          #+#    #+#             */
/*   Updated: 2024/11/11 22:36:04 by nachabi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/*void	del(void *content)
{
	free(content);
}
 int main()
{
	t_list	*freenode;
	char	*freecontent;

	freenode = malloc(sizeof(t_list));
	if (!freenode)
		return (1);
	freecontent = ft_strdup("hey nis");
	if (!freecontent)
	{
		free(freenode);
		return (1);
	}
	freenode->content = freecontent;
	freenode->next = NULL;
	printf("%s\n%p\n", freenode->content, freenode->next);
	ft_lstdelone(freenode, del);
	printf("%s\n%p\n", freenode->content, freenode->next);

	return (0);
}*/
