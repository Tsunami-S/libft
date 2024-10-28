/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:50:33 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/28 21:55:23 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*_dest;
	const unsigned char	*_src;
	size_t				i;
	int					d;

	if (dest == NULL && src == NULL)
		return (NULL);
	_dest = dest;
	_src = src;
	i = 0;
	d = 1;
	if (dest > src)
	{
		i = n - 1;
		d = -1;
	}
	while (n)
	{
		n--;
		_dest[i] = _src[i];
		i += d;
	}
	return (dest);
}

//#include <stdio.h>
//
// int	main(void)
//{
//	char	src[] = "abcde";
//	char	dest[] = "01234";
//
//	printf("dest: %s\n", dest);
//	printf("src : %s\n", src);
//	printf("after: %s\n", (char *)ft_memmove(dest, src, 5));
//	return (0);
//}
