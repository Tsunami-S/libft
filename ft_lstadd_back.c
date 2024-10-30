/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:45:09 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/28 15:45:12 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

// int main(void)
//{
//	t_list *node1;
//	t_list *node2;
//	t_list *node3;
//	t_list *ans;
//	int content1;
//	int content2;
//	int content3;
//	int num;
//
//	content1 = 10;
//	content2 = 200;
//	content3 = 3000;
//	node1 = ft_lstnew(&content1);
//	node2 = ft_lstnew(&content2);
//	node3 = ft_lstnew(&content3);
//	node1->next = node2;
//	ft_lstadd_back(&node1, node3);
//	ans = ft_lstlast(node1);
//	num = *(int*)ans->content;
//	printf("%d\n", num);
//	return (0);
//}
