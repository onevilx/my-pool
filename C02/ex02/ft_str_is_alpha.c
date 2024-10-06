/*
	SUBJECT :
	Create a function that returns 1 if the string given as a parameter contains only alphabetical characters,
	and 0 if it contains any other character.
	• Here’s how it should be prototyped :
	int	ft_str_is_alpha(char *str);
	• It should return 1 if str is empty.
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:11:06 by root              #+#    #+#             */
/*   Updated: 2024/10/06 18:50:58 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 97 || str[i] > 122) && (str[i] < 65 || str[i] > 90))
			return (0);
		i++;
	}
	return (1);
}
/*
int main ()
{
	printf("%d",ft_str_is_alpha(""));
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <stdio.h>
This line includes the standard input-output library (stdio.h).
This header file contains declarations for various functions
that are part of the C standard library, such as printf.

--------------------------------------
-> int ft_str_is_alpha(char *str)
+ Purpose :
This line defines a function named ft_str_is_alpha.

+ Details :
> int: The function returns an integer.
> ft_str_is_alpha: The name of the function.
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
-> if ((str[i] < 97 || str[i] > 122) && (str[i] < 65 || str[i] > 90))
+ Purpose :
This line checks if the character at position i in the string (str) is not an alphabetical character.

+ Details :
> if: The conditional construct.
> (str[i] < 97 || str[i] > 122): Checks if the character is not a lowercase letter.
> (str[i] < 65 || str[i] > 90): Checks if the character is not an uppercase letter.
> &&: Logical AND operator.

--------------------------------------
-> return (0);
+ Purpose :
This line returns 0 if the character at position i in the string (str) is not an alphabetical character.

+ Details :
> return: The keyword used to return a value from the function.
> (0): The value to be returned.

--------------------------------------
-> i++;
+ Purpose :
This line increments the variable i by 1.

+ Details :
> i++: Increments the value of i by 1.

--------------------------------------
-> return (1);
+ Purpose :
This line returns 1 if all characters in the string (str) are alphabetical or if the string is empty.

+ Details :
> return: The keyword used to return a value from the function.
> (1): The value to be returned.

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
-> printf("%d",ft_str_is_alpha(""));
+ Purpose :
This line prints the result of the ft_str_is_alpha function when called with an empty string.

+ Details :
> printf: The function used to print formatted output.
> "%d": The format string for an integer.
> ft_str_is_alpha(""): The function call with an empty string as the argument.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_str_is_alpha' function. ##
*/
