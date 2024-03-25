/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:17:51 by abait-ou          #+#    #+#             */
/*   Updated: 2023/10/04 14:18:00 by abait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	d;

	d = 2;
	while (d <= (nb / d))
	{
		if (nb % d == 0)
			return (0);
		d++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}
