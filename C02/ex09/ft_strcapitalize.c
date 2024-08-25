/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:27:41 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/03 16:59:13 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*lowalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	lowalpha(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			{
				if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
				{
					if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
					{
						str[i] -= 32;
					}
				}
			}
		}
		i++;
	}
	return (str);
}
/*
int main ()
{
	char str2 [] = "smnfweAQOD dnOWQJdwnd    ,PWala,wDWW";

	ft_strcapitalize(str2);

	printf("%s" , str2);
}
*/
