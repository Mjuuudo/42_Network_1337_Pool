/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:48:38 by abait-ou          #+#    #+#             */
/*   Updated: 2023/10/05 14:24:20 by abait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*result;
	int	i;

	size = max - min;
	result = (int *)malloc(size * sizeof(int));
	if (max <= min)
		return (NULL);
	if (!result)
		return (NULL);
	i = 0;
	while (i < size)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
