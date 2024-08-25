/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:07:24 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/10 13:25:52 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 0;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
		return (ft_recursive_factorial(nb - 1) * nb);
}
/*
int main()
{
	printf("%d",ft_recursive_factorial(5));
}
*/
