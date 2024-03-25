/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:18:29 by abait-ou          #+#    #+#             */
/*   Updated: 2023/09/18 16:51:54 by abait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	_putchar(char c)
{
	write(1, &c, 1);
}

void	_print_number(int a, int b)
{
	_putchar(48 + (a / 10));
	_putchar(48 + (a % 10));
	_putchar(' ');
	_putchar(48 + (b / 10));
	_putchar(48 + (b % 10));
	if (a < 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			_print_number(a, b);
			b++;
		}
		a++;
	}
}
