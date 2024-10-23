/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:39:45 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/23 16:39:51 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
	size_t count;

	count = 0;
	while(s[count])
		count++;
	return count;
}

//#include <string.h>
//#include <stdio.h>
//int main(void)
//{
//	char str[] = "abcde";
//
//	printf("   strlen = %lu\n", strlen(str));
//	printf("ft_strlen = %zu\n", ft_strlen(str));
//	return 0;
//}
