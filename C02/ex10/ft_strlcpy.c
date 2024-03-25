/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:00:40 by abait-ou          #+#    #+#             */
/*   Updated: 2023/09/26 14:29:07 by abait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len_src;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (src[i])
	{
		i++;
	}
	len_src = i;
	j = 0;
	while (src[j] && --size)
	{
		dest[j] = src[j];
		src++;
		dest++;
	}
	dest[j] = '\0';
	return (len_src);
}
/*int main()
{
	char test[] = "Test Hello world";
	char test2[] = "";
		unsigned int y;

	y = ft_strlcpy(test2,test,16);
	printf("%s  %d \n", test2, y);
	return 0;
}*/
