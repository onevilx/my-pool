/*
	SUBJECT :
	Write a function that displays the character passed as a parameter.
	It will be prototyped as follows :
	void	ft_putchar(char c);
*/

//____________________________________________________________________________________________________________________________________

/*
	DO NOT FORGET TO ADD THE STANDARD 42 HEADER IN EACH OF YOUR .C/.H FILES.
	THE NORMINETTE CHECKS ITS EXISTENCE ANYWAY! 
	
	•	TO ACTIVATE 42 HEADER USE F1 IN YOUR KEYBOARD.
*/

//____________________________________________________________________________________________________________________________________


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:06:06 by root              #+#    #+#             */
/*   Updated: 2024/07/24 15:31:13 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//____________________________________________________________________________________________________________________________________

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <unistd.h>
This line includes the unistd.h header file. 
This header file contains declarations for various system calls and other functions 
that are part of the POSIX standard, such as write.

--------------------------------------
-> void	ft_putchar(char c)
This line defines a function named ft_putchar that takes a single argument c 
of type char and returns nothing (void).

--------------------------------------
-> write(1, &c, 1);

This block is the body of the ft_putchar function. Inside the function, it calls the write system call. 
The write function is used to write data to a file descriptor.
Here's a breakdown of the arguments passed to write:

> 1: This is the file descriptor for standard output (stdout). In Unix-like operating systems, 
file descriptor 1 represents the standard output stream, which is typically the terminal.

> &c: This is the address of the character c. The write function expects a pointer to the data to be written.

> 1: This is the number of bytes to write. Since we are writing a single character, we pass 1.

!! Putting it all together, the ft_putchar function writes a single character c to the standard output !!

*/