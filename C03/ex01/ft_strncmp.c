/*
	SUBJECT :
	• Reproduce the behavior of the function strncmp (man strncmp).
	• Here’s how it should be prototyped :
	int ft_strncmp(char *s1, char *s2, unsigned int n);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 12:53:42 by root              #+#    #+#             */
/*   Updated: 2024/10/06 19:31:05 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	char sir[] = "waafiW";
	char chof[] = "waafiA";

	int res = ft_strncmp(sir,chof,0);
	printf("%d\n", res);
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <stdio.h>
This line includes the standard input-output library (stdio.h).
This header file contains declarations for various functions
that are part of the C standard library, such as printf.

--------------------------------------
-> int ft_strncmp(char *s1, char *s2, unsigned int n)
+ Purpose :
This line defines a function named ft_strncmp.

+ Details :
> int: The function returns an integer.
> ft_strncmp: The name of the function.
> char *s1: The function takes a pointer to a character array (first string) as an argument.
> char *s2: The function takes a pointer to a character array (second string) as an argument.
> unsigned int n: The function takes an unsigned integer representing the number of characters to compare.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> unsigned int i;
+ Purpose :
This line declares an unsigned integer variable named i.

+ Details :
> unsigned int: The type of the variable.
> i: The name of the variable.

--------------------------------------
-> i = 0;
+ Purpose :
This line initializes the variable i to 0.

+ Details :
> i: The variable to be initialized.
> 0: The initial value.

--------------------------------------
-> if (n == 0)
+ Purpose :
This line checks if the number of characters to compare (n) is 0.

+ Details :
> if: The conditional construct.
> n == 0: The condition to be checked.

--------------------------------------
-> return (0);
+ Purpose :
This line returns 0 if the number of characters to compare (n) is 0.

+ Details :
> return: The keyword used to return a value from the function.
> (0): The value to be returned.

--------------------------------------
-> while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
+ Purpose :
This line starts a while loop that continues as long as the characters at position i in both strings (s1 and s2) are equal, not the null character ('\0'), and i is less than n - 1.

+ Details :
> while: The loop construct.
> s1[i] == s2[i]: Checks if the characters at position i in both strings are equal.
> s1[i]: Accesses the character at position i in the first string.
> s2[i]: Accesses the character at position i in the second string.
> i < n - 1: The condition for the loop to continue.
> &&: Logical AND operator.

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
-> return (s1[i] - s2[i]);
+ Purpose :
This line returns the difference between the ASCII values of the characters at position i in both strings (s1 and s2).

+ Details :
> return: The keyword used to return a value from the function.
> (s1[i] - s2[i]): The value to be returned.

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
-> char sir[] = "waafiW";
+ Purpose :
This line declares a character array named sir and initializes it with the string "waafiW".

+ Details :
> char: The type of the array.
> sir[]: The name of the array.
> "waafiW": The initial value of the array.

--------------------------------------
-> char chof[] = "waafiA";
+ Purpose :
This line declares a character array named chof and initializes it with the string "waafiA".

+ Details :
> char: The type of the array.
> chof[]: The name of the array.
> "waafiA": The initial value of the array.

--------------------------------------
-> int res = ft_strncmp(sir,chof,0);
+ Purpose :
This line calls the ft_strncmp function, passing the arrays sir and chof, and the number 0 as arguments, and stores the result in the variable res.

+ Details :
> int res: Declares an integer variable named res.
> ft_strncmp: The name of the function.
> sir: The first string to be compared.
> chof: The second string to be compared.
> 0: The number of characters to compare.

--------------------------------------
-> printf("%d\n", res);
+ Purpose :
This line prints the result of the ft_strncmp function to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "%d\n": The format string for an integer followed by a newline.
> res: The result to be printed.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_strncmp' function. ##
*/