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

void	ft_printhex(unsigned long n, unsigned int size)
{
	if (size == 0)
		return ;
	ft_printhex(n / 16, size - 1);
	write(1, &"0123456789abcdef"[n % 16], 1);
}

int		ft_strlen(char *str)
{
	int		size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

void	print_address(char *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	ft_printhex((unsigned long)addr, 16);
	write(1, ": ", 2);
	while (i < size)
	{
		ft_printhex((unsigned long int)*(addr + i), 2);
		ft_printhex((unsigned long int)*(addr + i + 1), 2);
		write(1, &"  ", 2);
		i += 2;
	}
	if (i < 15)
	{
		write(1, "            ", 12);
		i++;
	}
	i = 0;
	while (i < size)
		{
		if (*(addr + i) >= 32 && *(addr + i) <= 126)
			write(1, (addr + i), 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	void	*end;
	char	*curr;

	curr = (char *) addr;
	end = (void *) (addr + size);
	while ((void *) curr < end && size != 0)
	{
		if (size >= 16)
			print_address(curr, 16);
		else
			 print_address(curr, size);
		size -= 16;
		curr += 16;
		write(1, "\n", 1);
	}
	return (addr);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	ft_print_memory(argv[1], ft_strlen(argv[1]));
}
// "Bonjour les aminches...c. est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. ."
