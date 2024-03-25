/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:44:38 by abait-ou          #+#    #+#             */
/*   Updated: 2023/09/26 16:53:02 by abait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (j < i)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (dest);
}
/*int main()
{
	char t1[] = "hello ";
	char t2[] = "world";

	printf("%s \n",ft_strcat(t1,t2));
	printf("%s \n",t1);
	return 0;
}*/
