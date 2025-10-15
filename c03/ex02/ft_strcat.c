/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:36:54 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/11 16:36:55 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
	@brief: ft_strcat - reproduces the behaviour of strcat
	concatenates two strings. Appends a copy of src to the end of dest.

	@return: returns a pointer to dest
*/
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/* 
#include <stdio.h>
int main()
{
    char dest[] = "Hello ";
    char src[] = "World";
    printf("strcat = %s\n", ft_strcat(dest, src));
    return 0;
} */
