/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:36:23 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/11 16:36:24 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
	@brief: ft_strcmp - reproduces the behaviour of strcmp
	compares two strings, s1 and s2 by comparing each element as an unsigned
	char

	@return: returns the difference between the first unique pair. The value is
	0 if s1 and s2 are equal, negative if s1 is less than s2, and positive if
	s2 is greater than s2
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

/* 
#include <stdio.h>
int main()
{
    char s1[] = "123456";
    char s2[] = "12345";
    printf("Strcmp = %i\n", ft_strcmp(s1, s2));
    
    return 0;
}
 */
