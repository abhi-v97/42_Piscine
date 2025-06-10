/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:01:59 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/04 16:07:03 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// simple function that takes a pointer to an integer and sets the value
// at that memory to 42
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/* 
#include <stdio.h>
int	main()
{
	int i = 0;
	printf("i = %i\n", i);
	int *ptr = &i;

	ft_ft(ptr);
	printf("i = %i\n", i);
} 
 */