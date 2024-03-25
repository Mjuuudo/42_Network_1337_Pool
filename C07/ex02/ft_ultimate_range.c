/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:49:10 by abait-ou          #+#    #+#             */
/*   Updated: 2023/10/05 14:26:09 by abait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*result;
	int	i;

	size = max - min;
	result = (int *)malloc(size * sizeof(int));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (result == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		result[i] = min + i;
		i++;
	}
	*range = result;
	return (size);
}
