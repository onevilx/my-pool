/*
	SUBJECT :
	Create a function that displays the alphabet in lowercase, on a single line,
	by ascending order, starting from the letter ’a’.
	Here’s how it should be prototyped : 
	void ft_print_alphabet(void);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:33:29 by root              #+#    #+#             */
/*   Updated: 2024/09/01 19:47:40 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

//____________________________________________________________________________________________________________________________________

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <unistd.h>
This line includes the unistd.h header file. 
This header file contains declarations for various system calls and other functions 
that are part of the POSIX standard, such as write.

--------------------------------------
-> void ft_print_alphabet(void)
+ Purpose :
This line defines a function named ft_print_alphabet.

+ Details :
> void: The function does not return any value.
> ft_print_alphabet: The name of the function.
> void: The function does not take any arguments.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> write(1, &c, 26);
+ Purpose : 
This line calls the write system call to write the string "abcdefghijklmnopqrstuvwxyz" to the standard output.

+ Details :
> 1: The file descriptor for standard output (stdout). In Unix-like operating systems, 
file descriptor 1 represents the standard output stream, which is typically the terminal.

> write: The system call used to write data to a file descriptor.

> "abcdefghijklmnopqrstuvwxyz": The string to be written. This string contains all the lowercase letters of the English alphabet.

> 26: The number of bytes to write. Since the string contains 26 characters, we pass 26.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_print_alphabet' function. ##
*/