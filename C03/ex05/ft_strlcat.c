/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:18:09 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/05 15:20:41 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lsrc;
	unsigned int	j;
	unsigned int	ldest;

	i = 0;
	j = 0;
	lsrc = ft_strlen(src);
	ldest = ft_strlen(dest);
	if (size <= ldest)
	{
		return (size + lsrc);
	}
	while (src[i] && ldest + i < size - 1)
	{
		dest[ldest + i] = src[i];
		i++;
	}
	dest[ldest + i] = '\0';
	return (ldest + lsrc);
}
/*
int main() 
{
	char a[] = "if i told you";
	char b[100] = "i was promised ";
	printf("%d | %s\n", ft_strlcat(b,a,29),b);
}
*/
