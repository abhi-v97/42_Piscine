/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:28:44 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/05 12:28:45 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// simple function to understand how passing pointers to functions in C work
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a / *b;
	y = *a % *b;
	*a = x;
	*b = y;
}
/* 
#include <stdio.h>
int	main() {
    int x = 22;
    int y = 5;
	printf("Value of x = %d \n", x);
    printf("Value of y = %d \n", y);

    int *ptr1;
    int *ptr2;

    ptr1 = &x;
    ptr2 = &y;
    ft_ultimate_div_mod(ptr1, ptr2);
    printf("Value of x after function call = %d \n", x);
    printf("Value of y after function call = %d \n", y);
    return 0;
}
 */