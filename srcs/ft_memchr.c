/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:20:51 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/26 23:02:42 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*_s;
	unsigned char	_c;

	_s = (unsigned char *)s;
	_c = (unsigned char)c;
	while (n)
	{
		if (*_s == _c)
			return ((void *)_s);
		_s++;
		n--;
	}
	return (NULL);
}

// int main(void)
//{
//	char str[] = "0123456789";
//	char c;
//	char *ans;
//	char *ft_ans;
//
//	c = '7';
//	ft_ans = ft_memchr((void *)str, (int)c, 9);
//	ans = memchr((void *)str, (int)c, 9);
//	printf("str: %s\n", str);
//	if(ans == NULL)
//		printf("memchr   : '%c' is not found.\n",c);
//	else
//		printf("memchr   : %s\n", ans);
//	if(ft_ans == NULL)
//		printf("ft_memchr: '%c' is not found.\n",c);
//	else
//		printf("ft_memchr: %s\n", ft_ans);
//	return (0);
//}
