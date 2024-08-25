/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:09:05 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/11 18:09:23 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printargs(int j, char *av[])
{
	int	i;

	j -= 1;
	while (j >= 1)
	{
		i = 0;
		while (av[j][i])
		{
			write(1, &av[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j--;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char *argv[])
{
	char	*bdel;
	int		a;
	int		b;

	a = 1;
	b = 1;
	if (argc > 1)
	{
		while (b < argc)
		{
			while (a < argc)
			{
				if (ft_strcmp(argv[b], argv[a]) > 0)
				{
					bdel = argv[b];
					argv[b] = argv[a];
					argv[a] = bdel;
				}
				a++;
			}
			a = 1;
			b++;
		}
		printargs(b, argv);
	}
}
