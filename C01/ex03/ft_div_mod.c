/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:27:01 by yaboukir          #+#    #+#             */
/*   Updated: 2024/07/28 18:13:30 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/*
int	main ()
{
	int i = 50;
	int x = 10;
	int div;
	int mod;

	ft_div_mod(i, x, &div, &mod);
		printf("div is : %d \n mod is : %d \n", div, mod);

}
*/
