/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:58:17 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/09 18:58:19 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
			continue ;
		}
		else
			return (0);
		i++;
	}
	return (1);
}
/* 
#include <stdio.h>
int	main(void)
{
	char test1[] = "helloworld";
	char test2[] = "HelloWorld";
	char test3[] = "";

	printf("test1 = %i\n", ft_str_is_lowercase(test1));
	printf("test2 = %i\n", ft_str_is_lowercase(test2));
	printf("test3 = %i\n", ft_str_is_lowercase(test3));
}
 */