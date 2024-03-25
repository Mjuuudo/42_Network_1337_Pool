/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:38:40 by abait-ou          #+#    #+#             */
/*   Updated: 2023/09/26 13:48:08 by abait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	char	*head;

	head = str;
	if (*str >= 'a' && *str <= 'z')
	{
		*str -= 32;
	}
	++str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		if (!(*(str - 1) >= '0' && *(str - 1) <= '9')
			&& !(*(str - 1) >= 'A' && *(str - 1) <= 'Z')
			&& !(*(str - 1) >= 'a' && *(str - 1) <= 'z')
			&& *str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		++str;
	}
	return (head);
}
/*int main() {
    char test[] = "laST Try oF ThiGGS";

    printf("%s \n" , ft_strcapitalize(test));

    return 0;
}*/
