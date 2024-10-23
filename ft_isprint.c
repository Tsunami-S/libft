/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:42:28 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/23 15:43:59 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

//#include <stdio.h>
// int main(void)
//{
//      unsigned char c1;
//      unsigned char c2;
//      unsigned char c3;
//      unsigned char c4;
//
//      c1 = 'a';
//      c2 = 'A';
//      c3 = '1';
//      c4 = ' ';
//
//      printf("\'%c\' -> %d\n", c1, ft_isprint(c1));
//      printf("\'%c\' -> %d\n", c2, ft_isprint(c2));
//      printf("\'%c\' -> %d\n", c3, ft_isprint(c3));
//      printf("\'%c\' -> %d\n", c4, ft_isprint(c4));
//      printf("\'\\0\' -> %d\n", ft_isprint('\0'));
//      printf("\'\\n\' -> %d\n", ft_isprint('\n'));
//      return (0);
//}
