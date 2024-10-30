/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:04:16 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/28 22:02:36 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ans;
	t_list	*new;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	ans = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&ans, del);
			return (NULL);
		}
		ft_lstadd_back(&ans, new);
		lst = lst->next;
	}
	return (ans);
}

// void	del(void *content)
//{
//	free(content);
//}
//
// void *f(void *content)
//{
//	int *ans;
//
//	ans = (int *)malloc(sizeof(int));
//	*ans = *(int *)content + 1;
//	return ((void *)ans);
//}
//
// int main(void)
//{
//	t_list *node1;
//	t_list *node2;
//	t_list *node3;
//	t_list *head;
//	t_list *ans;
//	int content1;
//	int content2;
//	int content3;
//
//	content1 = 1;
//	content2 = 2;
//	content3 = 3;
//	node1 = ft_lstnew(&content1);
//	node2 = ft_lstnew(&content2);
//	node3 = ft_lstnew(&content3);
//	ft_lstadd_back(&node1, node2);
//	ft_lstadd_back(&node1, node3);
//	head = node1;
//	printf("before: ");
//	while(head)
//	{
//		printf("%d ", *(int *)head->content);
//		head = head->next;
//	}
//	putchar('\n');
//	ans = ft_lstmap(node1, f, del);
//	printf("after : ");
//	while(ans)
//	{
//		printf("%d ", *(int *)ans->content);
//		ans = ans->next;
//	}
//	putchar('\n');
//	ft_lstclear(&ans, del);
//	return (0);
//}
