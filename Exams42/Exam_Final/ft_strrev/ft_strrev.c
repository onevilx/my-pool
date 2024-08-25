/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 23:43:13 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/12 23:56:23 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_length(char *str)
{
	int	len;
	len = 0;
	while(str[len])
	{
		len++;
	}
	return len;
}

char    *ft_strrev(char *str)
{
	int	len = ft_length(str);
	int	i;
	char	swt;
	i = 0;
	while(i < len / 2)
	{
		swt = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = swt;
		i++;
	}
	return str;
}
#include <stdio.h>
int main()
{
	char text[] = "naples";
	printf("%s\n", ft_strrev(text));
	return 0;
}
