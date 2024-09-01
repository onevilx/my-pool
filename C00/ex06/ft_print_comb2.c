/*
	SUBJECT :
	Create a function that displays all different combination of two two digits numbers(XX XX) between 00 and 99,
	listed by ascending order.
	• Here’s the expected output :
	`` $>./a.out | cat -e
	00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>``

*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:38:29 by root              #+#    #+#             */
/*   Updated: 2024/09/02 00:04:38 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ftadd(int i, int j)
{
	ft_putchar(i / 10 + 48);
	ft_putchar(i % 10 + 48);
	ft_putchar(' ');
	ft_putchar(j / 10 + 48);
	ft_putchar(j % 10 + 48);
	if (!(i == 98 && j == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ftadd(i, j);
			j++;
		}
		i++;
	}
}

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <unistd.h>
This line includes the unistd.h header file.
This header file contains declarations for various system calls and other functions
that are part of the POSIX standard, such as write.

--------------------------------------
-> void ft_putchar(char c)
+ Purpose :
This line defines a function named ft_putchar.

+ Details :
> void: The function does not return any value.
> ft_putchar: The name of the function.
> char c: The function takes a single character as an argument.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> write(1, &c, 1);
+ Purpose :
This line calls the write system call to write the character c to the standard output.

+ Details :
> 1: The file descriptor for standard output (stdout). In Unix-like operating systems,
file descriptor 1 represents the standard output stream, which is typically the terminal.

> write: The system call used to write data to a file descriptor.

> &c: The address of the character to be written.

> 1: The number of bytes to write. Since we are writing a single character, we pass 1.

--------------------------------------
-> void ftadd(int i, int j)
+ Purpose :
This line defines a function named ftadd.

+ Details :
> void: The function does not return any value.
> ftadd: The name of the function.
> int i, int j: The function takes two integers as arguments.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
+ Purpose :
This block prints the numbers i and j in a formatted way, and adds a comma and space unless the combination is '98' and '99'.

+ Details :
> ft_putchar(i / 10 + 48);: Prints the first digit of i.

> ft_putchar(i % 10 + 48);: Prints the second digit of i.

> ft_putchar(' ');: Prints a space.

> ft_putchar(j / 10 + 48);: Prints the first digit of j.

> ft_putchar(j % 10 + 48);: Prints the second digit of j.

> if (!(i == 98 && j == 99)): Checks if the combination is not '98' and '99'.

> ft_putchar(',');: If the condition is true, it prints a comma.

> ft_putchar(' ');: If the condition is true, it prints a space.

--------------------------------------
-> void ft_print_comb2(void)
+ Purpose :
This line defines a function named ft_print_comb2.

+ Details :
> void: The function does not return any value.
> ft_print_comb2: The name of the function.
> void: The function does not take any arguments.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
+ Purpose :
This block generates and prints all possible combinations of two different numbers from '00' to '99'.

+ Details :
> int i;: Declares an integer variable i.

> int j;: Declares an integer variable j.

> i = 0;: Initializes i to 0.

> while (i <= 98): Loops while i is less than or equal to 98.

> j = i + 1;: Initializes j to i + 1.

> while (j <= 99): Loops while j is less than or equal to 99.

> ftadd(i, j);: Calls the ftadd function with i and j.

> j++;: Increments j.

> i++;: Increments i.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_print_comb2' function. ##
*/