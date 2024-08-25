/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_interval.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:36:35 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/13 18:55:30 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 1)
	{
		while(argv[1][i])
		{
			if ((i % 3 == 0 && (i + 1) % 5 == 0) && i != 0 && i != 1)
			{
				write(1, "5", 1);
			}
			else if((i % 5 == 0) && i != 0 && i != 1)
			{
				write(1, "3", 1);
			}
			else if ((i  % 3 == 0) && i != 0 && i != 1)
			{
				write(1, "5", 1);
			}
			else
				write(1,&argv[1][i],1);
			i++;
		}
	}
}