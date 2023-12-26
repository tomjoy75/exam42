/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:57:06 by tjoyeux           #+#    #+#             */
/*   Updated: 2023/12/26 14:05:23 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d -> %d\n", 1, swap_bits(1));
}*/
