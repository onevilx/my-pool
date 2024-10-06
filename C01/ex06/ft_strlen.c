/*
	SUBJECT :
	Create a function that counts and returns the number of characters in a string.
	• Here’s how it should be prototyped :
	int ft_strlen(char *str);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:59:58 by root              #+#    #+#             */
/*   Updated: 2024/07/27 20:16:02 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int main ()
{
	char z[] = "saaalaam ;)";
	ft_strlen(z);
	printf("%d",ft_strlen(z));
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <stdio.h>
This line includes the standard input-output library (stdio.h).
This header file contains declarations for various functions
that are part of the C standard library, such as printf.

--------------------------------------
-> int ft_strlen(char *str)
+ Purpose :
This line defines a function named ft_strlen.

+ Details :
> int: The function returns an integer.
> ft_strlen: The name of the function.
> char *str: The function takes a pointer to a character (string) as an argument.

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
This line starts a while loop that continues as long as the character at position i in the string str is not the null character ('\0').

+ Details :
> while: The loop construct.
> str[i] != '\0': The condition for the loop to continue.
> str[i]: Accesses the character at position i in the string.
> '\0': The null character that marks the end of the string.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> i++;
+ Purpose :
This line increments the variable i by 1.

+ Details :
> i++: Increments the value of i by 1.

--------------------------------------
-> return (i);
+ Purpose :
This line returns the value of i, which represents the length of the string.

+ Details :
> return: The keyword used to return a value from the function.
> (i): The value to be returned.

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
-> char z[] = "saaalaam ;)";
+ Purpose :
This line declares a character array named z and initializes it with the string "saaalaam ;)".

+ Details :
> char: The type of the array.
> z[]: The name of the array.
> "saaalaam ;)": The initial value of the array.

--------------------------------------
-> ft_strlen(z);
+ Purpose :
This line calls the ft_strlen function, passing the string z as an argument.

+ Details :
> ft_strlen: The name of the function.
> z: The string to be passed as an argument.

--------------------------------------
-> printf("%d",ft_strlen(z));
+ Purpose :
This line prints the length of the string z to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "%d": The format specifier for an integer.
> ft_strlen(z): The function call that returns the length of the string z.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_strlen' function. ##
*/
