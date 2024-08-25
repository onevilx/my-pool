/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:21:40 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/13 00:08:23 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	calcul_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;
	int	sep_len;

	i = 0;
	total_len = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
		total_len += ft_strlen(strs[i++]);
	total_len += sep_len * (size -1);
	return (total_len);
}

void	str_copy(int size, char **strs, char *sep, char *strjoined)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	j = 0;
	res = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			strjoined[res++] = strs[i][j++];
		if (i < size -1)
		{
			j = 0;
			while (sep[j])
				strjoined[res++] = sep[j++];
		}
		i++;
	}
	strjoined[res] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	char	*strjoined;
	char	*empt_str;

	total_len = calcul_total_len(size, strs, sep);
	if (size == 0)
	{
		empt_str = malloc(1);
		empt_str[0] = '\0';
		return (empt_str);
	}
	strjoined = malloc(total_len + 1);
	if (!strjoined)
	{
		return (NULL);
	}
	str_copy(size, strs, sep, strjoined);
	return (strjoined);
}
/*#include <stdio.h>
int main()
{
	char *str[] = {"marouane","laamiri"};
	char *sep = "++";
	char *res = ft_strjoin(2, str, sep);

	printf("%s\n", res);
	free(res);
	return 0;
}*/
