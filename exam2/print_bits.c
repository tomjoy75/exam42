/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:01:09 by tjoyeux           #+#    #+#             */
/*   Updated: 2023/12/26 13:34:03 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int	bit;

	bit = 128;
	while (bit > 0)
	{
		if (octet >= bit)
		{
			ft_putchar('1');
			octet -= bit;
		}
		else 
			ft_putchar('0');
		bit /= 2;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	unsigned char	i;

	i = 42;
	printf("%d : \n", i);
	print_bits(i);
	i = 172;
	printf("\n%d : \n", i);
	print_bits(i);
	printf("\n");
}*/
