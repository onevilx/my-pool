/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:06:01 by yaboukir          #+#    #+#             */
/*   Updated: 2024/07/27 16:17:18 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
/*
int	main ()
{
	int ya = 1;
	int oa = 69;

	printf("young age is : %d and old age : %d\n",ya,oa);

	ft_swap(&ya,&oa);

	printf("young age is : %d and old age : %d\n",ya,oa);
}
*/
