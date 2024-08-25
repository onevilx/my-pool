/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 20:29:19 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/05 20:29:38 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	n = 0;
	i = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	dest[n] = '\0';
	return (dest);
}
/*int	main ()
{
	char s1[] = "a sat";
	char s2[14] = " wa feen";

	printf("%s",ft_strncat(s2,s1, 1));
}*/
