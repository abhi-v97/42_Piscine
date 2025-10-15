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


unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int i;
    int j;
    int dest_len;
    int src_len;
    i = 0;
    j = 0;
    while (src[src_len] != '\0')
    {
        src_len++;
    }
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }
    if (size == 0 || size <= dest_len)
        return (src_len + size);
    while (src[i] != '\0' && i < (size - dest_len - 1))
    {
        dest[j] = src[i];
        i++; 
        j++;
    }
    dest[j] = '\0';
    return (dest_len + src_len);
}
#include <stdio.h>
#include <string.h>
int main()
{
    char test1[] = "Hello World";
    char test2[] = "Hell";
    printf("strcat = %s\n", ft_strlcat(test1, test2, 10));
    // printf("strcat = %s\n", ft_strlcat(test2, test1));
    
    return 0;
}