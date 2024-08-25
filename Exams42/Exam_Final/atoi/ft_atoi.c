/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 03:53:55 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/13 04:14:26 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i = 0;
	int	res = 0;
	int	sign = 1;
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		{
			i++;
		}
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign = -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + (str[i] - 48);
			i++;
		}
	return (res * sign);
}
#include<stdio.h>
int	main()
{
	printf("%d\n", ft_atoi("  -1234avb54"));
}
