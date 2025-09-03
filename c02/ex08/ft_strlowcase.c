/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:40:57 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/10 15:40:59 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/* 
#include <stdio.h>
int	main(void)
{
	char test1[] = "HELLO WORLD";
	char test2[] = "HeLloworLd";
	char test3[] = "";
	char test4[] = "@ # \t $ *";

	printf("test1 = %s\n", ft_strlowcase(test1));
	printf("test2 = %s\n", ft_strlowcase(test2));
	printf("test3 = %s\n", ft_strlowcase(test3));
	printf("test4 = %s\n", ft_strlowcase(test4));
}
 */