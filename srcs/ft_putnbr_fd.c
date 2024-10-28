/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:13:43 by tssaito           #+#    #+#             */
/*   Updated: 2024/10/28 14:13:48 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	mod;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	mod = n % 10 + '0';
	write(fd, &mod, 1);
}

// int main(void)
//{
//	int fd;
//
//	fd = 1;
//	ft_putnbr_fd(-2147483648, fd);
//	write(1, "\n", 1);
//	ft_putnbr_fd(2147483647, fd);
//	write(1, "\n", 1);
//	ft_putnbr_fd(0, fd);
//	write(1, "\n", 1);
//	ft_putnbr_fd(42, fd);
//	write(1, "\n", 1);
//	return (0);
//}
