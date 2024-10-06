/*
	SUBJECT :
	• Create a function that transforms every letter to lowercase.
	• Here’s how it should be prototyped :
	char	*ft_strlowcase(char *str);
	• It should return str.
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:52:14 by root              #+#    #+#             */
/*   Updated: 2024/10/06 19:14:44 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
int main ()
{
	char str[] = "JE SAIS QUE TU SAIS COMME NOUS";
	ft_strlowcase(str);
	printf("%s",str);
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <stdio.h>
This line includes the standard input-output library (stdio.h).
This header file contains declarations for various functions
that are part of the C standard library, such as printf.

--------------------------------------
-> char *ft_strlowcase(char *str)
+ Purpose :
This line defines a function named ft_strlowcase.

+ Details :
> char *: The function returns a pointer to a character.
> ft_strlowcase: The name of the function.
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
-> if (str[i] >= 'A' && str[i] <= 'Z')
+ Purpose :
This line checks if the character at position i in the string (str) is an uppercase letter.

+ Details :
> if: The conditional construct.
> str[i] >= 'A': Checks if the character is greater than or equal to 'A'.
> str[i] <= 'Z': Checks if the character is less than or equal to 'Z'.
> &&: Logical AND operator.

--------------------------------------
-> str[i] += 32;
+ Purpose :
This line converts the uppercase letter at position i in the string (str) to its corresponding lowercase letter.

+ Details :
> str[i]: The character at position i in the string.
> += 32: Adds 32 to the ASCII value of the character to convert it to lowercase.

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
-> char str[] = "JE SAIS QUE TU SAIS COMME NOUS";
+ Purpose :
This line declares a character array named str and initializes it with the string "JE SAIS QUE TU SAIS COMME NOUS".

+ Details :
> char: The type of the array.
> str[]: The name of the array.
> "JE SAIS QUE TU SAIS COMME NOUS": The initial value of the array.

--------------------------------------
-> ft_strlowcase(str);
+ Purpose :
This line calls the ft_strlowcase function, passing the array str as an argument.

+ Details :
> ft_strlowcase: The name of the function.
> str: The array to be modified.

--------------------------------------
-> printf("%s", str);
+ Purpose :
This line prints the modified string to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "%s": The format string for the string.
> str: The modified string to be printed.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_strlowcase' function. ##
*/
