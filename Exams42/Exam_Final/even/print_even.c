/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_even.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:07:10 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/15 14:18:56 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_even(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
int	main()
{
	char text[] = "0123456789";
	print_even(text);
}