/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:30:55 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/28 15:31:01 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*head;
	int		count;

	head = lst;
	count = 0;
	while (head)
	{
		count++;
		head = head->next;
	}
	return (count);
}

//int	main(void)
//{
//	t_list	*node1;
//	t_list	*node2;
//	t_list	*node3;
//	int		data1;
//	int		data2;
//	int		data3;
//	int		num;
//
//	data1 = 1;
//	data2 = 2;
//	data3 = 3;
//	node1 = ft_lstnew(&data1);
//	node2 = ft_lstnew(&data2);
//	node3 = ft_lstnew(&data3);
//	node1->next = node2;
//	node2->next = node3;
//	num = ft_lstsize(node1);
//	printf("%d\n", num);
//	return (0);
//}
