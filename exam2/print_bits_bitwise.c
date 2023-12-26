/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits_bitwise.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:01:09 by tjoyeux           #+#    #+#             */
/*   Updated: 2023/12/26 13:51:55 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int	i;

	i = 7;
	while (i > 0)
	{
		ft_putchar((octet >> i & 1) + '0');	
		i--;
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
