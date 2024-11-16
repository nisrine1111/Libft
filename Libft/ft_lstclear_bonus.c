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
