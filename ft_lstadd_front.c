/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:20:52 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/30 16:47:50 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

// int main(void)
//{
//	t_list *node1;
//	t_list *node2;
//	t_list *node3;
//	t_list *head;
//	int content1;
//	int content2;
//	int content3;
//	int num;
//
//	content1 = 1;
//	content2 = 2;
//	content3 = 3;
//	node1 = ft_lstnew(&content1);
//	node2 = ft_lstnew(&content2);
//	node3 = ft_lstnew(&content3);
//	head = node1;
//	node1->next = node2;
//	ft_lstadd_front(&head, node3);
//	while(head != NULL)
//	{
//		num = *(int*)head->content;
//		printf("%d, ", num);
//		head = head->next;
//	}
//	return (0);
//}
