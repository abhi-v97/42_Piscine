/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:48:10 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/04 16:48:12 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// simple function to test how integers and pointers behave
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/* 
#include <stdio.h>
int main () {
    int x = 22;
    int y = 5;
	int div;
	int mod;
    int *ptr1 = &div;
    int *ptr2 = &mod;

    ft_div_mod(x, y, ptr1, ptr2);

    printf("Value of x = %d \n", x);
    printf("Value of y = %d \n", y);
    printf("Value of div = %d \n", div);
    printf("Value of mod = %d \n", mod);

    return 0;
} */