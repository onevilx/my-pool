/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 03:34:23 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/13 03:44:52 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	count_alen(char *str)
{
	int i;
	int	count;

	i = 0;
	count = 0;
	while(str[i] != '\0')
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			break;
		}
		count++;
		i++;
	}
	return count;
}
int	main()
{
	char text[] = "knewnenevndsvAa";
	printf("%d\n",count_alen(text));
}
