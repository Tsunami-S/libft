/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:25:36 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/23 15:29:18 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return 1;
	return 0;
}

#include <stdio.h>
int main(void)
{
      unsigned char c1;
      unsigned char c2;
      unsigned char c3;
      unsigned char c4;

      c1 = 'a';
      c2 = 'A';
      c3 = '1';
      c4 = ' ';

      printf("\'%c\' -> %d\n", c1, ft_isdigit(c1));
      printf("\'%c\' -> %d\n", c2, ft_isdigit(c2));
      printf("\'%c\' -> %d\n", c3, ft_isdigit(c3));
      printf("\'%c\' -> %d\n", c4, ft_isdigit(c4));
      return 0;
}
