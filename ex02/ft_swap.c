/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:52:37 by danielpe          #+#    #+#             */
/*   Updated: 2024/08/27 17:17:38 by danielpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	box;

	box = *a;
	*a = *b;
	*b = box;
}

/*int	main ()
 {
	int	x;
	int	y;

	x = 4;
	y = 2;
	
	printf("antes:%i%i\n", x, y);
	ft_swap(&x, &y);
	printf("depois:%i%i\n", x, y);
	return (0);
 }
*/
