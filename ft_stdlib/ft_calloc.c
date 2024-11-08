/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:00:27 by tssaito           #+#    #+#             */
/*   Updated: 2024/11/08 11:29:20 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "ft_string.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ans;

	if (size && nmemb > (size_t)(-1) / size)
		return (NULL);
	if (!nmemb || !size)
	{
		nmemb = 1;
		size = 1;
	}
	ans = malloc(nmemb * size);
	if (!ans)
		return (NULL);
	ft_bzero(ans, nmemb * size);
	return (ans);
}
