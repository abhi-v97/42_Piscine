/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:26:27 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/09 17:26:28 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// now we have to create a function which sorts an array
// this is performed with a simple bubble sort algorithm
// Bubble sort breakdown:
// 1. compare first two elements, swap if their order isn't correct
// 2. now compare second and third element, swap if needed
// 3. repeat for each position in the array
// 4. the first pass ensures the last element of the list is correctly sorted
// 5. repeats steps 2 and 3, but ignoring the last element (hence size--)
// 6. continue this process until no swaps are made in a pass
// Advantages: easy to understand and implement, memory efficient, stable
// disadvantages: large time complexity O(n^2), slow for large sets
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size > 0)
	{
		i = 0;
		while (i < (size - 1))
		{
			swap = tab[i];
			if (tab[i] > tab[i + 1])
			{
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}

/* 
#include <stdio.h>
int	main()
{
	int size = 6;
	int string[6] = {6, 3, 1, 2, 5, 4};
	ft_sort_int_tab(string, size);
	printf("{%i, %i, %i, %i, %i, %i}", 
	string[0], string[1], string[2], string[3], 
	string[4], string[5]);
	return (0);
}
  */