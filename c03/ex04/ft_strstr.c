/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:37:36 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/11 16:37:37 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
	@brief: ft_strstr - reproduces the behaviour of strstr
	Finds the first occurrence of substring to_find in string str, not
	including the null terminator
	
	@return: returns a pointer to the beginning of the located substring, or
	NULL if not found. If to_string is empty, the return is str itself.
*/
char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	if (to_find && to_find[0] == '\0')
		return (str);
	i = 0;
	while (str && str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
/* 
#include <stdio.h>
#include <string.h>
int main()
{
	char test1[] = "test1 Hell test2 Hello test3 test4 World";
	char test2[] = "Hello";
	printf("strcat = %s\n", ft_strstr(test1, test2));
	// printf("strcat = %s\n", strstr(test1, test2));
	return 0;
}
 */