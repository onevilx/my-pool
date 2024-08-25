/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 18:14:13 by yaboukir          #+#    #+#             */
/*   Updated: 2024/07/27 18:51:59 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int	*a, int	*b)

{
	int	div;
	int	mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}
/*
int	main ()
{
	int x = 10;
	int y = 5;
	
	ft_ultimate_div_mod(&x, &y);

	printf("division is : %d \n modulo is : %d \n", x , y);
}
*/
