/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:51:26 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/26 15:36:53 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

//#include <string.h>
//#include <stdio.h>
// int main(void)
//{
//	char str1[] = "abcde";
//	char str2[] = "abcde";
//	int i;
//
//	printf("bzero(2)   :%s ->", str1);
//	bzero(str1, 2);
//	i = 0;
//	while(i < 5)
//	{
//		printf("%c", str1[i]);
//		i++;
//	}
//	putchar('\n');
//	printf("ft_bzero(2):%s ->", str2);
//	ft_bzero(str2, 2);
//	i = 0;
//	while(i < 5)
//	{
//		printf("%c", str2[i]);
//		i++;
//	}
//	putchar('\n');
//	return (0);
//}
