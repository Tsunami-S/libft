/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:22:56 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/23 19:30:47 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	return (0);
}

//#include <ctype.h>
//#include <stdio.h>
// int main(void)
//{
//	unsigned char c1;
//	unsigned char c2;
//	unsigned char c3;
//	unsigned char c4;
//
//	c1 = 'a';
//	c2 = 'A';
//	c3 = '1';
//	c4 = ' ';
//
//	printf("\'%c\': %d ->%d\n", c1, isalpha(c1), ft_isalpha(c1));
//	printf("\'%c\': %d ->%d\n", c2, isalpha(c2), ft_isalpha(c2));
//	printf("\'%c\': %d ->%d\n", c3, isalpha(c3), ft_isalpha(c3));
//	printf("\'%c\': %d ->%d\n", c4, isalpha(c4), ft_isalpha(c4));
//	return (0);
//}
