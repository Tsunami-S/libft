/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:35:22 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/28 22:58:53 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ans;

	if (lst == NULL)
		return (NULL);
	ans = lst;
	while (ans->next != NULL)
		ans = ans->next;
	return (ans);
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
//	node2->next = node3;
//	ans = ft_lstlast(node1);
//	num = *(int*)ans->content;
//	printf("%d\n", num);
//	return (0);
//}
