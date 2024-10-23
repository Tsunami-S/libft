/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:26:17 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/23 19:26:33 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *ans;

	ans = (unsigned char *)s;

	i = 0;
	while(i < n)
	{
		ans[i] = c;
		i++;
	}
	return s;
}


//#include <string.h>
//#include <stdio.h>
//int main(void)
//{
//	char str[] = "abcde";
//	int arr[5] = {1, 2, 3, 4, 5};
//	int i;
//
//	printf("Before   :%s\n", str);
//	memset(str, 65, sizeof(str));
//	printf("memset   :%s\n", str);
//	ft_memset(str, 66, sizeof(str));
//	printf("ft_memset:%s\n", str);
//	i = 0;
//	printf("Before   :");
//	while(i < 5)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	putchar('\n');
//	i = 0;
//	memset(arr, 0, sizeof(arr));
//	printf("memset   :");
//	while(i < 5)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	putchar('\n');
//	ft_memset(arr, 0, sizeof(arr));
//	i = 0;
//	printf("ft_memset:");
//	while(i < 5)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	putchar('\n');
//	return 0;
//}
