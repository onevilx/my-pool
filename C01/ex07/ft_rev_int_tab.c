/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 15:24:29 by yaboukir          #+#    #+#             */
/*   Updated: 2024/07/28 16:06:37 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	final;
	int	swap;

	first = 0;
	final = size - 1;
	while (first < final)
	{
		swap = tab[final];
		tab[final] = tab[first];
		tab[first] = swap;
		first++;
		final--;
	}
}
/*
int main ()
{
	int tab[5] = {1,2,3,4,5};

		ft_rev_int_tab(tab,5);

		printf("%d %d %d %d %d",tab[0],tab[1],tab[2],tab[3],tab[4]);
}
*/
