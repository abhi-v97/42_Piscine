/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:37:57 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/11 16:37:58 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
	@brief: ft_strlcat - reproduces the behaviour of strlcat (BSD)
	size-bound string concantenation
	
	param size is the total size of the final string including the NULL. If
	there are no fre bytes in dest (aka size is too small), it returns the
	total size
	
	If the null terminator was not found in dest, the destination string is not
	null-terminated to prevent the function from going out of bounds.
	
	@return: returns total length of string it attempted to create, so initial
	length of dest plus src
*/
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		i;
	int		dest_len;
	int		src_len;

	i = 0;
	src_len = 0;
	dest_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (dest_len < size && dest[dest_len] != '\0')
		dest_len++;
	if (size <= dest_len)
		return (src_len + dest_len);
	while (src[i] != '\0' && i < (size - dest_len - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len != size)
		dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}

/* 
#include <stdio.h>
int main()
{
	char test1[12] = "Hell\0"; 
	char *test2 = "o World\0";
	printf("strcat = %i\n", ft_strlcat(test1, test2, 12));
	printf("strcat = %s\n", test1);
		
	return 0;
}
 */