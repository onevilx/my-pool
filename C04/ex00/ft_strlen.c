/*
	SUBJECT :
	• Create a function that counts and returns the number of characters in a string.
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
/*   Created: 2024/08/06 15:09:39 by root              #+#    #+#             */
/*   Updated: 2024/10/06 19:53:49 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/*
int	main()
{
	char s1[] = "hellohaxor";
	printf("%d",ft_strlen(s1));
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
> char *str: The function takes a pointer to a character array (string) as an argument.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> int len;
+ Purpose :
This line declares an integer variable named len.

+ Details :
> int: The type of the variable.
> len: The name of the variable.

--------------------------------------
-> len = 0;
+ Purpose :
This line initializes the variable len to 0.

+ Details :
> len: The variable to be initialized.
> 0: The initial value.

--------------------------------------
-> while (str[len] != '\0')
+ Purpose :
This line starts a while loop that continues as long as the character at position len in the string (str) is not the null character ('\0').

+ Details :
> while: The loop construct.
> str[len] != '\0': The condition for the loop to continue.
> str[len]: Accesses the character at position len in the string.
> '\0': The null character that marks the end of the string.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> len++;
+ Purpose :
This line increments the variable len by 1.

+ Details :
> len++: Increments the value of len by 1.

--------------------------------------
-> return (len);
+ Purpose :
This line returns the length of the string.

+ Details :
> return: The keyword used to return a value from the function.
> (len): The value to be returned.

--------------------------------------
-> int main()
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
-> char s1[] = "hellohaxor";
+ Purpose :
This line declares a character array named s1 and initializes it with the string "hellohaxor".

+ Details :
> char: The type of the array.
> s1[]: The name of the array.
> "hellohaxor": The initial value of the array.

--------------------------------------
-> printf("%d",ft_strlen(s1));
+ Purpose :
This line calls the ft_strlen function, passing the array s1 as an argument, and prints the result to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "%d": The format string for an integer.
> ft_strlen(s1): The function call with the array s1 as an argument.

--------------------------------------
-> return 0;
+ Purpose :
This line returns 0 to indicate that the program ended successfully.

+ Details :
> return: The keyword used to return a value from the function.
> 0: The value to be returned.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_strlen' function. ##
*/
