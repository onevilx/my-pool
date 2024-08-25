/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboukir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:27:40 by yaboukir          #+#    #+#             */
/*   Updated: 2024/08/14 18:28:06 by yaboukir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while(argv[1][i])
        {

            if (argv[1][i] >= 'a' && argv[1][i] <= 'm' || argv[1][i] >= 'A' && argv[1][i] <= 'M')
            {
                argv[1][i] += 13;
            }
            else if (argv[1][i] >= 'n' && argv[1][i] <= 'z' || argv[1][i] >= 'N' && argv[1][i] <= 'Z')
            {
                argv[1][i] -= 13;
            }
            write(1, &argv[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
    else
    write(1, "\n", 1);
    return 0;
}
