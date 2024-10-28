/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 23:00:18 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/27 18:54:07 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*_s1;
	unsigned char	*_s2;
	size_t			i;

	_s1 = (unsigned char *)s1;
	_s2 = (unsigned char *)s2;
	i = 0;
	while (n)
	{
		if (_s1[i] != _s2[i])
			return (_s1[i] - _s2[i]);
		n--;
		i++;
	}
	return (0);
}

// int main(void)
//{
//	char s1[] = "abcde12345";
//	char s2[] = "abcdefghij";
//	size_t n;
//
//	n = 5;
//	printf("s1: %s\n", s1);
//	printf("s2: %s\n", s2);
//	printf("n(%zu)\n",n);
//	printf("memcmp   : %d\n", memcmp((void *)s1, (void *)s2, n));
//	printf("ft_memcmp: %d\n", ft_memcmp((void *)s1, (void *)s2, n));
//	return (0);
//}
