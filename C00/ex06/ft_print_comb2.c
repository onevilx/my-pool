/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <yaboukir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:38:29 by yaboukir          #+#    #+#             */
/*   Updated: 2024/07/25 11:57:04 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ftadd(int i, int j)
{
	ft_putchar(i / 10 + 48);
	ft_putchar(i % 10 + 48);
	ft_putchar(' ');
	ft_putchar(j / 10 + 48);
	ft_putchar(j % 10 + 48);
	if (!(i == 98 && j == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ftadd(i, j);
			j++;
		}
		i++;
	}
}
