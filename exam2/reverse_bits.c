/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:57:06 by tjoyeux           #+#    #+#             */
/*   Updated: 2023/12/26 14:06:08 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}

#include <stdio.h>
int	main(void)
{
	printf("%d -> %d\n", 1, reverse_bits(1));
}
