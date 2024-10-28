/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:50:18 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/28 21:53:04 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*_dest;
	const unsigned char	*_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	_dest = (unsigned char *)dest;
	_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		_dest[i] = _src[i];
		i++;
	}
	return (dest);
}

//#include <stdio.h>
// int main(void)
//{
//	char dest[] = "0123456789";
//	char src[] = "abcde";
//
//	printf("dest: %s\n", dest);
//	printf("src : %s\n", src);
//	printf("after: %s\n", (char *)ft_memcpy(dest, src, 5));
//	return (0);
//}
