/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:21:30 by danielpe          #+#    #+#             */
/*   Updated: 2024/08/27 18:28:10 by danielpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 11;
	b = 5;


	ft_div_mod(a, b, &div, &mod);
	printf("O resto de %d e  %d é %d\n", a, b, mod);
	printf("A divisão de %d por %d é %d\n", a, b, div);
	return(0);
}*/
