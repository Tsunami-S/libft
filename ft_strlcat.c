/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:34:23 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/30 15:06:25 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dsize == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dsize <= dst_len)
		return (dsize + src_len);
	ft_strlcpy(dst + dst_len, src, dsize - dst_len);
	return (dst_len + src_len);
}

//#include <stdio.h>
//#include <string.h>
// int   main(void)
//{
//      char    dest[10] = "abc";
//      char    dest2[10] = "abc";
//      char    src[] = "1234";
//
//      printf("%d: %s\n", ft_strlcat(dest, src, 9), dest);
//      printf("%ld: %s\n", strlcat(dest2, src, 9), dest2);
//      return (0);
//}
