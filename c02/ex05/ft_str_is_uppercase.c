/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:07:56 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/09 19:07:57 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	char test1[] = "HelloWorld";
	char test2[] = "HELLOWORLD";
	char test3[] = "";

	printf("test1 = %i\n", ft_str_is_uppercase(test1));
	printf("test2 = %i\n", ft_str_is_uppercase(test2));
	printf("test3 = %i\n", ft_str_is_uppercase(test3));
}
  */