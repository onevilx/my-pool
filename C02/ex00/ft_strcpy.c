/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:49:33 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/03 13:16:04 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
void	ft_putstr(char	*str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1,&str[i],1);
		i++;
	}
}

int main ()
{
	char src[] = "wafin afin akhona\n";
	char dest[20];

	ft_putstr(src);

	char *res = ft_strcpy(dest, src);
	ft_putstr(res);
}
*/
