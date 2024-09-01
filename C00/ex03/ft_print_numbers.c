/*
	SUBJECT :
	Create a function that displays all digits, on a single line, by ascending order.
	Here’s how it should be prototyped :
	void ft_print_numbers(void);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:58:03 by root              #+#    #+#             */
/*   Updated: 2024/07/24 16:02:43 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}

//____________________________________________________________________________________________________________________________________

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <unistd.h>
This line includes the unistd.h header file.
This header file contains declarations for various system calls and other functions
that are part of the POSIX standard, such as write.

--------------------------------------
-> void ft_print_numbers(void)
+ Purpose :
This line defines a function named ft_print_numbers.

+ Details :
> void: The function does not return any value.
> ft_print_numbers: The name of the function.
> void: The function does not take any arguments.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> write(1, &c, 10);
+ Purpose :
This line calls the write system call to write the string "0123456789" to the standard output.

+ Details :
> 1: The file descriptor for standard output (stdout). In Unix-like operating systems,
file descriptor 1 represents the standard output stream, which is typically the terminal.

> write: The system call used to write data to a file descriptor.

> "0123456789": The string to be written. This string contains all the digits from 0 to 9.

> 10: The number of bytes to write. Since the string contains 10 characters, we pass 10.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_print_numbers' function. ##
*/
