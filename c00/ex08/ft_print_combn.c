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
			ft_putchar(c[i++] + '0');
		if (c[0] < 10 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	char	output[10];
	int		k;

	for (int i = 0; i < n; i++)
		output[i] = i;
	while (output[0] <= (10 - n))
	{
		while (output[n - 1] < 10)
		{
			print_num(output, n);
			output[n - 1]++;
		}
		if (output[0] == (10 - n) || output[0] > 9)
			break ;
        k = n - 2;
        while (k >= 0 && output[k] == 10 - n + k)
            k--;
		output[k]++;
        for (int j = k + 1; j < n; j++)
            output[j] = output[j - 1] + 1;
	}
	ft_putchar('\n');
}

// TESTING: ./a.out n | sed 's/, /\n/g' | uniq -c  | wc -l
// the result should be a number exactly equal to 10 choose n (eg 10 choose 3 = 120)
// remove the wc -l to see that all output is unique
int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "Please provide an int argument 0 < n < 10\n", 32);
		return (1);
	}
	ft_print_combn(*argv[1] - '0');
	return (0);
}
