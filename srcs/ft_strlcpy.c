/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:01:44 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/27 19:21:07 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (dsize == 0)
		return (len);
	i = 0;
	while (src[i] && i < dsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

//int	main(void)
//{
//	char	src[] = "abcdefg";
//	char	dest1[8];
//	char	dest2[4];
//	char	dest3[8];
//	char	dest4[8];
//	int		src_len1;
//	int		src_len2;
//	int		src_len3;
//	int		src_len4;
//
//	src_len1 = ft_strlcpy(dest1, src, 8);
//	src_len2 = ft_strlcpy(dest2, src, 4);
//	src_len3 = ft_strlcpy(dest3, src, 4);
//	src_len4 = ft_strlcpy(dest4, src, 0);
//	dest4[0] = '\0';
//	printf("src  : %s\n", src);
//	printf("dest1: %s\tsrc_len: %d\tdest_len: %ld\n", dest1, src_len1,
//		ft_strlen(dest1));
//	printf("dest2: %s\tsrc_len: %d\tdest_len: %ld\n", dest2, src_len2,
//		ft_strlen(dest2));
//	printf("dest3: %s\tsrc_len: %d\tdest_len: %ld\n", dest3, src_len3,
//		ft_strlen(dest3));
//	printf("dest4: %s\tsrc_len: %d\tdest_len: %ld\n", dest4, src_len4,
//		ft_strlen(dest4));
//	return (0);
//}
