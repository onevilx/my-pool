/*
	SUBJECT :
	Create a function that displays all different combinations of three different digits in ascending order, 
	listed by ascending order - yes, repetition is voluntary.
	• Here’s the intended output :
	`` $>./a.out | cat -e
	012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$> ``
	Here’s how it should be prototyped :
	void ft_print_comb(void);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:43:31 by root              #+#    #+#             */
/*   Updated: 2024/09/01 23:56:11 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	addnumbers(int i, int j, int k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	if (!(i == '7' && j == '8' && k == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				addnumbers(i, j, k);
				k++;
			}
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
-> void addnumbers(int i, int j, int k)
+ Purpose :
This line defines a function named addnumbers.

+ Details :
> void: The function does not return any value.
> addnumbers: The name of the function.
> int i, int j, int k: The function takes three integers as arguments.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
+ Purpose :
This block prints the characters i, j, and k, and adds a comma and space unless the combination is '7', '8', '9'.

+ Details :
> ft_putchar(i): Prints the character i.

> ft_putchar(j): Prints the character j.

> ft_putchar(k): Prints the character k.

> if (!(i == '7' && j == '8' && k == '9')): Checks if the combination is not '7', '8', '9'.

> ft_putchar(',');: If the condition is true, it prints a comma.

> ft_putchar(' ');: If the condition is true, it prints a space.

--------------------------------------
-> void ft_print_comb(void)
+ Purpose :
This line defines a function named ft_print_comb.

+ Details :
> void: The function does not return any value.
> ft_print_comb: The name of the function.
> void: The function does not take any arguments.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
+ Purpose :
This block generates and prints all possible combinations of three different digits from '0' to '9'.

+ Details :
> int i;: Declares an integer variable i.

> int j;: Declares an integer variable j.

> int k;: Declares an integer variable k.

> i = '0';: Initializes i to the character '0'.

> while (i <= '7'): Loops while i is less than or equal to '7'.

> j = i + 1;: Initializes j to i + 1.

> while (j <= '8'): Loops while j is less than or equal to '8'.

> k = j + 1;: Initializes k to j + 1.

> while (k <= '9'): Loops while k is less than or equal to '9'.

> addnumbers(i, j, k);: Calls the addnumbers function with i, j, and k.

> k++;: Increments k.

> j++;: Increments j.

> i++;: Increments i.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_print_comb' function. ##
*/