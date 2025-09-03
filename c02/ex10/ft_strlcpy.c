/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:21:41 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/11 13:21:44 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	while (src[len] != '\0')
		len++;
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
/* 
#include <stdio.h>
#include <string.h>
int main()
{
    char src[] = "Hello";
    char dest[] = "World";

    printf("Length of src = %i\n", ft_strlcpy(dest, src, 4));
    printf("Dest string after function call = %s\n", dest);
    
    return 0;
}
 */