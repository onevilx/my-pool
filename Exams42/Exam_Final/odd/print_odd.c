/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_odd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:59:32 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/12 11:05:59 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	print_odd(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (i % 2 == 1)
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main()
{
	char text[] = "0123456789";
	print_odd(text);
}