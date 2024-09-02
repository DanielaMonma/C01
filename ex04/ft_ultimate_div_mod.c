/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:40:51 by danielpe          #+#    #+#             */
/*   Updated: 2024/08/29 16:56:16 by danielpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rest;

	div = *a / *b;
	rest = *a % *b;
	*a = div;
	*b = rest;
}

/*int	main()
{
	int a = 10;
	int b = 3;

	printf("Antes da função: a = %d, b = %d\n", a, b);

    	ft_ultimate_div_mod(&a, &b);

    	printf("Depois da função: a = %d (divisão), b = %d (resto)\n", a, b);

    return (0);
}*/
