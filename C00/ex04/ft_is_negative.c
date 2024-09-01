/*
	SUBJECT :
	Create a function that displays ’N’ or ’P’ depending on the integer’s sign entered as a parameter.
	If n is negative, display ’N’. If n is positive or null, display ’P’.
	Here’s how it should be prototyped :
	void ft_is_negative(int n);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:09:11 by root              #+#    #+#             */
/*   Updated: 2024/07/24 17:07:19 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_is_negative(int n)

{
	if (n >= 0)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
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
-> void ft_is_negative(int n)
+ Purpose :
This line defines a function named ft_is_negative.

+ Details :
> void: The function does not return any value.
> ft_is_negative: The name of the function.
> int n: The function takes an integer as an argument.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
+ Purpose :
This block checks if the integer n is negative or non-negative and prints 'N' or 'P' accordingly.

+ Details :
> if (n >= 0): Checks if the integer n is greater than or equal to 0.

> ft_putchar('P'): If the condition is true (it is positive), it calls ft_putchar with the character 'P'.

> else: If the condition is false (it is negative), it executes the following block.

> ft_putchar('N'): Calls ft_putchar with the character 'N'.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_is_negative' function. ##
*/