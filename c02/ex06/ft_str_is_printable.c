/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:11:24 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/10 15:11:25 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	char test1[] = "Hello World";
	char test2[] = "Hello \tWorld";
	char test3[] = "";

	printf("test1 = %i\n", ft_str_is_printable(test1));
	printf("test2 = %i\n", ft_str_is_printable(test2));
	printf("test3 = %i\n", ft_str_is_printable(test3));
}
 */