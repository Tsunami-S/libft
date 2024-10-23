/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:28:07 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/23 16:39:28 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
                return 1;
	else if(c >= '0' && c <= '9')
                return 1;
	return 0;
}

//#include <ctype.h>
//#include <stdio.h>
//int main(void)
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
//	printf("\'%c\': %d ->%d\n", c1, isalnum(c1), ft_isalnum(c1));
//	printf("\'%c\': %d ->%d\n", c2, isalnum(c2), ft_isalnum(c2));
//	printf("\'%c\': %d ->%d\n", c3, isalnum(c3), ft_isalnum(c3));
//	printf("\'%c\': %d ->%d\n", c4, isalnum(c4), ft_isalnum(c4));
//	return 0;
//}
