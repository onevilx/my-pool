/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   occ_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 03:23:29 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/13 03:32:53 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	occ_a(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while(str[i] != '\0')
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			count++;
		}
		i++;
	}
	return count;
}
int main ()
{
	char text[] = "haaloA maaAma";
	printf("%d\n",occ_a(text));
}
