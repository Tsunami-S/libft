/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:42:19 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/28 13:42:20 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	change_char(unsigned int i, char *c)
//{
//	(void)i;
//	*c = '0';
//}
//
// int	main(void)
//{
//	char	str[] = "abcde";
//
//	printf("before: %s\n", str);
//	ft_striteri(str, change_char);
//	printf("after : %s\n", str);
//	return (0);
//}
