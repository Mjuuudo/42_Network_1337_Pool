/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:43:39 by abait-ou          #+#    #+#             */
/*   Updated: 2023/09/26 15:11:35 by abait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j++] = '\0';
	}
	return (dest);
}
/*int main()
{
	char s1[] = "hello world";
	char s2[] = "sasda";

	ft_strncpy(s2,s1,5);
	printf("%s \n",s2);
	return 0;
}*/
