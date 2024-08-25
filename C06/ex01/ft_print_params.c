/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:21:12 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/11 16:52:54 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;
	int	i;

	i = 0;
	j = 1;
	if (argc > 1)
	{
		while (j < argc)
		{
			while (argv[j][i])
			{
				write(1, &argv[j][i], 1);
				i++;
			}
			i = 0;
			j++;
			write(1, "\n", 1);
		}
	}
	return (0);
}
