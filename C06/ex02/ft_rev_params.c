/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:45:19 by abait-ou          #+#    #+#             */
/*   Updated: 2023/10/02 16:35:40 by abait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char *av[])
{
	int	i;
	int	j;

	i = ac - 1;
	j = 0;
	while (i != 0)
	{
		while (av[i][j])
		{
			_putchar(av[i][j]);
			j++;
		}
		_putchar('\n');
		j = 0;
		i--;
	}
	return (0);
}
