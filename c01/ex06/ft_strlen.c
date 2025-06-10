/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:24:17 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/09 15:24:18 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strlen returns the length of a C string
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*  
#include <stdio.h>
int	main()
{
	printf("Length = %i\n", ft_strlen("123456"));
	return (0);
}
 */