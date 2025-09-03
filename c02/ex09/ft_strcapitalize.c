/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalsang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:45:40 by avalsang          #+#    #+#             */
/*   Updated: 2024/07/10 15:45:41 by avalsang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_str_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first_letter;

	ft_str_lowcase(str);
	first_letter = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (first_letter == 1)
				str[i] -= 32;
			first_letter = 0;
		}
		else if ((str[i] >= '0' && str[i] <= '9'))
			first_letter = 0;
		else
			first_letter = 1;
		i++;
	}
	return (str);
}
/* 
#include <stdio.h>
int main()
{
	char test1[] = "heLLo, WORLD";
	char test2[] = "heLloworLd";
	char test3[] = "";
	char test4[] = "salut, comment tu vas ? 42mots 
	quarante-deux; cinquante+et+un";

	printf("test1 = %s\n", ft_strcapitalize(test1));
	printf("test2 = %s\n", ft_strcapitalize(test2));
	printf("test3 = %s\n", ft_strcapitalize(test3));
	printf("test4 = %s\n", ft_strcapitalize(test4));
	return 0;
}
   */