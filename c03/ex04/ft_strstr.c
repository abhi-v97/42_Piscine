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

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    i = 0;
    j = 0;
    while (to_find[j] == '\0')
    {
        return (str);
    }
    
    while (str[i] != '\0')
    {
        while (str[i + j] == to_find[j] && str[i+j] != '\0')
        {
            j++;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
		j = 0;
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