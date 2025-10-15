/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:36:36 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/11 16:36:38 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
/* 
#include <stdio.h>
int main()
{
    char test1[] = "Hello World";
    char test2[] = "Hell";
    printf("Strncmp = %i\n", ft_strncmp(test1, test2, 4));
	printf("Strncmp = %i\n", ft_strncmp(test1, test2, 10));
    return 0;
} */