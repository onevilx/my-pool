/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 15:20:15 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/10 15:48:29 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
		return (ft_recursive_power(nb, power - 1) * nb);
}
/*
#include <stdio.h>
int main ()
{
	printf("%d",ft_recursive_power(2,-1));
}
*/
