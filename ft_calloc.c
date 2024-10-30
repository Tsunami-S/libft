/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:00:27 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/28 21:58:13 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ans;
	size_t	max_size;

	max_size = (size_t)(-1);
	if (size && nmemb > max_size / size)
		return (NULL);
	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	ans = malloc(nmemb * size);
	if (ans == NULL)
		return (NULL);
	ft_bzero(ans, nmemb * size);
	return (ans);
}

// int main(void)
//{
//	char *s1;
//	char *s2;
//	size_t nmemb;
//	size_t size;
//
//	nmemb = 2;
//	size = 10;
//	s1 = calloc(nmemb, size);
//	s2 = ft_calloc(nmemb, size);
//	printf("%d\n", memcmp(s1, s2, nmemb));
//	free(s1);
//	free(s2);
//	return (0);
//}
