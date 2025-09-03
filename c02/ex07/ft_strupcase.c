/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:34:26 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/10 15:34:28 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/* 
#include <stdio.h>
int	main(void)
{
	char test1[] = "Hello World";
	char test2[] = "helloworld";
	char test3[] = "";
	char test4[] = "@ # \t $ *";

	printf("test1 = %s\n", ft_strupcase(test1));
	printf("test2 = %s\n", ft_strupcase(test2));
	printf("test3 = %s\n", ft_strupcase(test3));
	printf("test4 = %s\n", ft_strupcase(test4));
}
 */