/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 03:18:01 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/13 03:21:48 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len] != '\0')
	{
		len++;
	}
	return len;
}
#include <stdio.h>
int	main()
{
	char w1[] = "hellomama";
	printf("%d\n",ft_strlen(w1));
}
