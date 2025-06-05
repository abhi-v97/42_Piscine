/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:30:54 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/11 13:01:43 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_num(char *c, int n)
{
	int	digit;
	int	i;

	digit = 0;
	i = 0;
	if (digit == 0)
	{
		while (i < n)
		{
			ft_putchar(c[i++] + 48);
			if (c[0] < (10 - n))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

void	ft_print_combn(int n)
{
	char	output[10];
	int		i;

	i = 0;
	while (i < n)
		output[i++] = 0;
	i = 0;
	while (output[0] <= (10 - n))
	{
		print_num(output, n);
		output[n - 1]++;
	}
}
/*
int	main(void)
{
	ft_print_combn(1);
}
*/
