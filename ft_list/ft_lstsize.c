/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:30:55 by tssaito           #+#    #+#             */
/*   Updated: 2024/11/07 21:23:09 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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
