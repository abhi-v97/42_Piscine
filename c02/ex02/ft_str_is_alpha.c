/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:33:00 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/09 18:33:02 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
		else if (str[i] >= 'a' && str[i] <= 'z')
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
	char test2[] = "Hello World!";
	char test3[] = "";

	printf("test1 = %i\n", ft_str_is_alpha(test1));
	printf("test2 = %i\n", ft_str_is_alpha(test2));
	printf("test3 = %i\n", ft_str_is_alpha(test3));
} */