/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:08:30 by abait-ou          #+#    #+#             */
/*   Updated: 2023/09/26 17:39:14 by abait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len_dest;
	unsigned int	j;

	len_dest = 0;
	while (dest[len_dest])
	{
		len_dest++;
	}
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest[j + len_dest] = src [j];
		j++;
	}
	dest[j + len_dest] = '\0';
	return (dest);
}
/*int main()
{
	char t1[] = "Hello ";
	char t2[] = "World";
	
	printf("%s \n",ft_strncat(t1,t2,3));
	return (0);
}*/
