/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:25:44 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/04 16:28:58 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// simple function which swaps the values of two pointers
void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/* 
#include <stdio.h>
int main () {
    int x = 4;
    int y = 7;
	printf("Value of x = %d \n", x);
    printf("Value of y = %d \n", y);
    int *a = &x;
    int *b = &y;

    ft_swap(a, b);

    printf("Value of x after swap = %d \n", x);
    printf("Value of y after swap = %d \n", y);
    return 0;
}
 */