/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:22:11 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/11 13:22:13 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex_1;
	char	hex_2;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			hex_1 = "0123456789abcdef"[str[i] / 16];
			hex_2 = "0123456789abcdef"[str[i] % 16];
			ft_putchar(hex_1);
			ft_putchar(hex_2);
		}
		i++;
	}
}
/* 
#include <stdio.h>
#include <string.h>
int main()
{
    char test1[] = "Coucou\ntu vas bien ?";    
    char test2[] = "Coucou\ntu vas bien \v \t \b ?";
    ft_putstr_non_printable(test1);
	ft_putchar('\n');
    ft_putstr_non_printable(test2);
    
    return 0;
}
 */