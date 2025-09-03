/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:44:34 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/09 17:44:37 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* 
#include <stdio.h>
#include <string.h>// strcpy(dest, src);
int	main(void)
{
	char dest[] = "Hello";
	char src[] = "World";
	
	printf("dest = %s, src = %s\n", dest, src);
	ft_strcpy(dest, src);
	//strcpy(dest, src);
	printf("After function call, dest = %s, src = %s\n", dest, src);

} */