/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:17:37 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/11 18:29:00 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 1)
	{
		while (argc > 1)
		{
			while (argv[argc -1][i])
			{
				write(1, &argv[argc - 1][i], 1);
				i++;
			}
			i = 0;
			write(1, "\n", 1);
			argc--;
		}
	}
	return (0);
}
