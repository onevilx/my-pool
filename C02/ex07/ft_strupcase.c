/*
	SUBJECT :
	• Create a function that transforms every letter to uppercase.
	• Here’s how it should be prototyped :
	char	*ft_strupcase(char *str);
	• It should return str.
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 01:23:14 by root              #+#    #+#             */
/*   Updated: 2024/10/06 19:10:51 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int	main ()
{
	char str[] = "i love haxing haxor";

	ft_strupcase(str);
	printf("%s\n", str);
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <stdio.h>
This line includes the standard input-output library (stdio.h).
This header file contains declarations for various functions
that are part of the C standard library, such as printf.

--------------------------------------
-> char *ft_strupcase(char *str)
+ Purpose :
This line defines a function named ft_strupcase.

+ Details :
> char *: The function returns a pointer to a character.
> ft_strupcase: The name of the function.
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
-> if (str[i] >= 'a' && str[i] <= 'z')
+ Purpose :
This line checks if the character at position i in the string (str) is a lowercase letter.

+ Details :
> if: The conditional construct.
> str[i] >= 'a': Checks if the character is greater than or equal to 'a'.
> str[i] <= 'z': Checks if the character is less than or equal to 'z'.
> &&: Logical AND operator.

--------------------------------------
-> str[i] -= 32;
+ Purpose :
This line converts the lowercase letter at position i in the string (str) to its corresponding uppercase letter.

+ Details :
> str[i]: The character at position i in the string.
> -= 32: Subtracts 32 from the ASCII value of the character to convert it to uppercase.

--------------------------------------
-> i++;
+ Purpose :
This line increments the variable i by 1.

+ Details :
> i++: Increments the value of i by 1.

--------------------------------------
-> return (str);
+ Purpose :
This line returns the pointer to the modified string (str).

+ Details :
> return: The keyword used to return a value from the function.
> (str): The value to be returned.

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
-> char str[] = "i love haxing haxor";
+ Purpose :
This line declares a character array named str and initializes it with the string "i love haxing haxor".

+ Details :
> char: The type of the array.
> str[]: The name of the array.
> "i love haxing haxor": The initial value of the array.

--------------------------------------
-> ft_strupcase(str);
+ Purpose :
This line calls the ft_strupcase function, passing the array str as an argument.

+ Details :
> ft_strupcase: The name of the function.
> str: The array to be modified.

--------------------------------------
-> printf("%s\n", str);
+ Purpose :
This line prints the modified string to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "%s\n": The format string for the string.
> str: The modified string to be printed.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_strupcase' function. ##
*/
