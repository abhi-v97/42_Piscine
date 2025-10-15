/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:37:09 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/11 16:37:11 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/* 
#include <stdio.h>
int main()
{
    char dest[] = "Hello ";
    char src[] = "World";
	char src2[] = "!!!";
    printf("strncat = %s\n", ft_strncat(dest, src, 5));
    printf("strncat = %s\n", ft_strncat(dest, src2, 3));
    
    return 0;
}
 */