/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:08:44 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/12 10:42:26 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a')
			{
				write(1,"a\n",2);
				return 0;
			}
			i++;
		}
		write(1,"\n",1);
		return 0;
	}
	write(1,"a\n",2);
	return 0;
}
