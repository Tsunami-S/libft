/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:26:17 by tssaito           #+#    #+#             */
/*   Updated: 2024/11/08 11:33:47 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*copy_s;

	copy_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		copy_s[i] = c;
		i++;
	}
	return (s);
}
