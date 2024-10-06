/*
	SUBJECT :
	• Create a function that displays a string of characters on the standard output.
	• Here’s how it should be prototyped :
	void ft_putstr(char *str);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:02:22 by root              #+#    #+#             */
/*   Updated: 2024/10/06 19:56:41 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int	main ()
{
	ft_putstr("kokocava");
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <unistd.h>
This line includes the standard Unix system call library (unistd.h).
This header file contains declarations for various system call functions,
such as write, which is used to write data to a file descriptor.

--------------------------------------
-> void ft_putstr(char *str)
+ Purpose :
This line defines a function named ft_putstr.

+ Details :
> void: The function does not return a value.
> ft_putstr: The name of the function.
> char *str: The function takes a pointer to a character array (string) as an argument.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> int i;
+ Purpose :
This line declares an integer variable named i.

+ Details :
> int: The type of the variable.
> i: The name of the variable.

--------------------------------------
-> i = 0;
+ Purpose :
This line initializes the variable i to 0.

+ Details :
> i: The variable to be initialized.
> 0: The initial value.

--------------------------------------
-> while (str[i] != '\0')
+ Purpose :
This line starts a while loop that continues as long as the character at position i in the string (str) is not the null character ('\0').

+ Details :
> while: The loop construct.
> str[i] != '\0': The condition for the loop to continue.
> str[i]: Accesses the character at position i in the string.
> '\0': The null character that marks the end of the string.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> write(1, &str[i], 1);
+ Purpose :
This line writes the character at position i in the string (str) to the standard output (file descriptor 1).

+ Details :
> write: The function used to write data to a file descriptor.
> 1: The file descriptor for standard output.
> &str[i]: The address of the character at position i in the string.
> 1: The number of bytes to write.

--------------------------------------
-> i++;
+ Purpose :
This line increments the variable i by 1.

+ Details :
> i++: Increments the value of i by 1.

--------------------------------------
-> int main ()
+ Purpose :
This line defines the main function, which is the entry point of the program.

+ Details :
> int: The function returns an integer.
> main: The name of the function.
> (): The function takes no arguments.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> ft_putstr("kokocava");
+ Purpose :
This line calls the ft_putstr function, passing the string "kokocava" as an argument.

+ Details :
> ft_putstr: The function call.
> "kokocava": The string to be displayed.

--------------------------------------
-> return 0;
+ Purpose :
This line returns 0 to indicate that the program ended successfully.

+ Details :
> return: The keyword used to return a value from the function.
> 0: The value to be returned.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_putstr' function. ##
*/
