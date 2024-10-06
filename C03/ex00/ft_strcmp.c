/*
	SUBJECT :
	• Reproduce the behavior of the function strcmp (man strcmp).
	• Here’s how it should be prototyped :
	int	ft_strcmp(char *s1, char *s2);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 20:30:38 by root              #+#    #+#             */
/*   Updated: 2024/10/06 19:29:00 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main()
{
	char str1[] = "abbcccddddeeee";
	char str2[] = "abbcccddddeeee";

	int res = ft_strcmp(str1,str2);

	printf("%d",res);
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <stdio.h>
This line includes the standard input-output library (stdio.h).
This header file contains declarations for various functions
that are part of the C standard library, such as printf.

--------------------------------------
-> int ft_strcmp(char *s1, char *s2)
+ Purpose :
This line defines a function named ft_strcmp.

+ Details :
> int: The function returns an integer.
> ft_strcmp: The name of the function.
> char *s1: The function takes a pointer to a character array (first string) as an argument.
> char *s2: The function takes a pointer to a character array (second string) as an argument.

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
-> while (s1[i] && s2[i] && s1[i] == s2[i])
+ Purpose :
This line starts a while loop that continues as long as the characters at position i in both strings (s1 and s2) are not the null character ('\0') and are equal.

+ Details :
> while: The loop construct.
> s1[i]: Accesses the character at position i in the first string.
> s2[i]: Accesses the character at position i in the second string.
> s1[i] == s2[i]: Checks if the characters at position i in both strings are equal.
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
-> char str1[] = "abbcccddddeeee";
+ Purpose :
This line declares a character array named str1 and initializes it with the string "abbcccddddeeee".

+ Details :
> char: The type of the array.
> str1[]: The name of the array.
> "abbcccddddeeee": The initial value of the array.

--------------------------------------
-> char str2[] = "abbcccddddeeee";
+ Purpose :
This line declares a character array named str2 and initializes it with the string "abbcccddddeeee".

+ Details :
> char: The type of the array.
> str2[]: The name of the array.
> "abbcccddddeeee": The initial value of the array.

--------------------------------------
-> int res = ft_strcmp(str1,str2);
+ Purpose :
This line calls the ft_strcmp function, passing the arrays str1 and str2 as arguments, and stores the result in the variable res.

+ Details :
> int res: Declares an integer variable named res.
> ft_strcmp: The name of the function.
> str1: The first string to be compared.
> str2: The second string to be compared.

--------------------------------------
-> printf("%d",res);
+ Purpose :
This line prints the result of the ft_strcmp function to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "%d": The format string for an integer.
> res: The result to be printed.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_strcmp' function. ##
*/
