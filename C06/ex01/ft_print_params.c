/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:34:11 by abait-ou          #+#    #+#             */
/*   Updated: 2023/10/02 14:44:34 by abait-ou         ###   ########.fr       */
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

	i = 1;
	j = 0;
	while (i <= ac - 1)
	{
		while (av[i][j] != '\0')
		{
			_putchar(av[i][j]);
			j++;
		}
		i++;
		j = 0;
		_putchar('\n');
	}
	return (0);
}
