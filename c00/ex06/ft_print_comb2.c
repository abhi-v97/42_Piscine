/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:54:36 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/05 11:54:40 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_num(int n)
{
	char	a;
	char	b;

	a = n / 10 + '0';
	b = n % 10 + '0';
	ft_putchar(a);
	ft_putchar(b);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			print_num(i);
			write(1, " ", 1);
			print_num(j);
			if (i != 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
/* 
int	main(void)
{
	ft_print_comb2();
	return (0);
}
 */