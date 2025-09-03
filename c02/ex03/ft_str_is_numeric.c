/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:56:14 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/09 18:56:15 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	char test1[] = "1984";
	char test2[] = "Hello World!";
	char test3[] = "";

	printf("test1 = %i\n", ft_str_is_numeric(test1));
	printf("test2 = %i\n", ft_str_is_numeric(test2));
	printf("test3 = %i\n", ft_str_is_numeric(test3));
}
 */