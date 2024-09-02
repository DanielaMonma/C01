/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:01:42 by danielpe          #+#    #+#             */
/*   Updated: 2024/08/29 18:23:58 by danielpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	box;
	int	i;
	int	end;

	i = 0;
	end = size -1;
	while (i < end)
	{
		box = tab[i];
		tab[i] = tab[end];
		tab[end] = box;
		i++;
		end--;
	}
}

/*int main()
{   
    int arr[] = {1, 2, 3, 4, 5, 6};
 
    ft_rev_int_tab(arr, 6);
 for (int i =0; i < 6; i++)
 {
    printf("%d", arr[i]);
 }
    printf("\n");

    return 0;
}*/
