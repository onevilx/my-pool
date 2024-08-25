/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 21:01:35 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/11 21:01:45 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;
	int	size;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*#include<stdio.h>
int main()
{
	int i = 0;
	int *arr;
	int min = 0;
	int max = 11;
	
	arr= ft_range(min ,max);

	while(i < max -min)
	{
		printf("%d\n",arr[i]);
		i++;
	}
	free(arr);
	return 0;
}*/
