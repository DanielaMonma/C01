/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:36:03 by danielpe          #+#    #+#             */
/*   Updated: 2024/08/29 17:15:59 by danielpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/*int	main(void)

{
	char string[]= "Daniela";
	int length;

	length = ft_strlen(string);
	
	printf("O número de caracteres na string ( %s )  é %d\n",string, length);
	
	return (0);
}*/
