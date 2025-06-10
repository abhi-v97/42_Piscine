/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:46:59 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/09 15:47:00 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// function which reverses an array of integers
// here we learn how to work with an array of ints, and how to manipulate them
// method: you don't need to go through the entire list, just half 
// swap first and last, then second and second last etc, until you reach the
// midpoint, and that's it, the array is reversed
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = swap;
		i++;
	}
}

/* 
#include <stdio.h>
int	main()
{
	int size = 5;
	int string[5] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(string, size);
	printf("Reversed array = {%i, %i, %i, %i, %i}", 
	string[0], string[1], string[2], string[3], string[4]);
	return (0);
}
  */