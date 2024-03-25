/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:14:13 by abait-ou          #+#    #+#             */
/*   Updated: 2023/10/02 16:25:10 by abait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	_putchar(char c)
{
	write(1, &c, 1);
}

void	_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

int	_strcmp(char *fs1, char *fs2)
{
	int	i;

	i = 0;
	while (fs1[i] != '\0' || fs2[i] != '\0')
	{
		if (fs1[i] != fs2[i])
		{
			return (fs1[i] - fs2[i]);
		}
		i++;
	}
	return (0);
}

void	swap(char *fs1, char *fs2)
{
	char	tmp;

	tmp = *fs1;
	*fs1 = *fs2;
	*fs2 = tmp;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	x;

	i = 1;
	x = 1;
	while (x <= argc - 1)
	{
		while (i < argc - 1)
		{
			if (_strcmp(argv[i], argv[i + 1]) > 0)
			{
				swap(argv[i], argv[i + 1]);
			}
			i++;
		}
		x++;
	}
	i = 1;
	while (i < argc)
	{
		_putstr(argv[i]);
		_putchar('\n');
		i++;
	}
	return (0);
}
