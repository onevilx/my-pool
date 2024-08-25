/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 20:09:07 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/15 20:18:33 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int argc, char **argv)
{
	int	i;
	int	rep;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if (argv[1][i]  >= 'a' && argv[1][i] <= 'z')
			{
				rep = argv[1][i] - 'a';
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				rep = argv[1][i] - 'A';
			}
			while (rep > 0)
			{
				write(1, &argv[1][i], 1);
					rep--;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
