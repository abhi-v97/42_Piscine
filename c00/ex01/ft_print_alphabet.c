/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:39:35 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/04 12:39:38 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>



void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}

/* 
int	main(void)
{
	ft_print_alphabet();
} 
 */