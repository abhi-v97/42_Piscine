/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:18:10 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/09 18:18:12 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
/* 
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char dest[] = "Hello";
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char dest[] = "Hello";
	char src[] = "World";
	
	printf("dest = %s, src = %s\n", dest, src);
	ft_strncpy(dest, src, 9);
	//strncpy(dest, src, 9);
	printf("After function call, dest = %s, src = %s\n", dest, src);
}

	char src[] = "World";
	
	printf("dest = %s, src = %s\n", dest, src);
	ft_strncpy(dest, src, 9);
	//strncpy(dest, src, 9);
	printf("After function call, dest = %s, src = %s\n", dest, src);
}
 */