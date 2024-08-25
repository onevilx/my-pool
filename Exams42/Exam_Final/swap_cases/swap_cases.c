/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_cases.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:33:50 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/15 15:30:02 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*swap_cases(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return str;
}
#include <stdio.h>
int	main()
{
	char txt1[] = "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification.";
	char txt2[] = "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.";
	char txt3[] = "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot";
	printf("%s\n",swap_cases(txt1));
	printf("%s\n",swap_cases(txt2));
	printf("%s\n",swap_cases(txt3));
}
