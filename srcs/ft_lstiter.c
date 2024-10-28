/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:23:01 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/28 16:23:03 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void f(void *content)
//{
//	char *_con;
//
//	_con = (char *)content;
//	while(*_con)
//	{
//		*_con = '0';
//		_con++;
//	}
//}
//
// int main(void)
//{
//	t_list *node1;
//	char content1[] = "abcde";
//
//	node1 = ft_lstnew(&content1);
//	printf("before: %s\n", (char *)node1->content);
//	ft_lstiter(node1, f);
//	printf("after : %s\n", (char *)node1->content);
//	return (0);
//}
//
