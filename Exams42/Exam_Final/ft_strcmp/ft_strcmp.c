/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:42:46 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/12 23:38:50 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s2[i] && s1[i])
	{
		if (s2[i] != s1[i])
			return (s2[i] - s1[i]);
		i++;
	}
	return (s2[i] - s1[i]);
}
#include <stdio.h>
int	main()
{
	char src[] = "aabbccdd";
	char dest[] = "aabbccdd";
	printf("%d\n", ft_strcmp(dest,src));
}
