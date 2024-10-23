/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:37:12 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/23 16:38:55 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfh.h"

int ft_isascii(int c)
{
	if(c >= 0 && c <= 127)
		return 1;
	return 0;
}

//#include <ctype.h>
//#include <stdio.h>
//int main(void)
//{
//        unsigned char c1;
//        unsigned char c2;
//        unsigned char c3;
//        unsigned char c4;
//
//        c1 = 'a';
//        c2 = 'A';
//        c3 = '1';
//        c4 = ' ';
//
//        printf("\'%c\': %d ->%d\n", c1, isascii(c1), ft_isascii(c1));
//        printf("\'%c\': %d ->%d\n", c2, isascii(c2), ft_isascii(c2));
//        printf("\'%c\': %d ->%d\n", c3, isascii(c3), ft_isascii(c3));
//        printf("\'%c\': %d ->%d\n", c4, isascii(c4), ft_isascii(c4));
//	printf("  0: %d ->%d\n", isascii(0), ft_isascii(0));
//	printf(" -1: %d ->%d\n", isascii(-1), ft_isascii(-1));
//	printf("200: %d ->%d\n", isascii(200), ft_isascii(200));
//	return 0;
//}
