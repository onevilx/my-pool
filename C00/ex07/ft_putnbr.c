/*
	SUBJECT :
	Create a function that displays the number entered as a parameter.
	The function has to be able to display all possible values within an int type variable.
	• Here’s how it should be prototyped :
	void ft_putnbr(int nb);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:04:16 by root              #+#    #+#             */
/*   Updated: 2024/09/02 00:09:31 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
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
-> void ft_putnbr(int nb)
+ Purpose :
This line defines a function named ft_putnbr.

+ Details :
> void: The function does not return any value.
> ft_putnbr: The name of the function.
> int nb: The function takes a single integer as an argument.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
+ Purpose :
This block prints the integer nb to the standard output.

+ Details :
> if (nb == -2147483648): Checks if the integer nb is equal to the minimum possible integer value (-2147483648).

> ft_putchar('-');: If the condition is true, it prints a '-' sign.

> ft_putchar('2');: If the condition is true, it prints a '2'.

> nb = 147483648;: If the condition is true, it updates the value of nb to 147483648.

> if (nb < 0): Checks if the integer nb is negative.

> ft_putchar('-');: If the condition is true, it prints a '-' sign.

> nb = -nb;: If the condition is true, it updates the value of nb to its absolute value.

> if (nb >= 10): Checks if the integer nb is greater than or equal to 10.

> ft_putnbr(nb / 10);: If the condition is true, it recursively calls ft_putnbr with nb divided by 10.

> ft_putnbr(nb % 10);: If the condition is true, it recursively calls ft_putnbr with the remainder of nb divided by 10.

> else: If the condition is false, it executes the following block.

> ft_putchar(nb + '0');: Prints the character representation of the integer nb.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_putnbr' function. ##
*/