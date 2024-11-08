/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tssaito <tssaito@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:28:07 by tssaito           #+#    #+#             */
/*   Updated: 2024/11/07 21:04:32 by tssaito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}