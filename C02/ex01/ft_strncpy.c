/*
	SUBJECT :
	Reproduce the behavior of the function strncpy (man strncpy).
	• Here’s how it should be prototyped :
	char	*ft_strncpy(char *dest, char *src, unsigned int n);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 21:22:49 by root              #+#    #+#             */
/*   Updated: 2024/10/06 18:47:18 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main ()
{
	char src[] = "ANA GHADI LDAR!";
	char dest[15];

	ft_strncpy(dest, src, 11);

	printf("source is : %s\n", src);

	printf("dest is : %s\n", dest);
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <stdio.h>
This line includes the standard input-output library (stdio.h).
This header file contains declarations for various functions
that are part of the C standard library, such as printf.

--------------------------------------
-> char *ft_strncpy(char *dest, char *src, unsigned int n)
+ Purpose :
This line defines a function named ft_strncpy.

+ Details :
> char *: The function returns a pointer to a character.
> ft_strncpy: The name of the function.
> char *dest: The function takes a pointer to a character array (destination) as an argument.
> char *src: The function takes a pointer to a character array (source) as an argument.
> unsigned int n: The function takes an unsigned integer representing the number of characters to copy.

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
-> while (i < n && src[i] != '\0')
+ Purpose :
This line starts a while loop that continues as long as the variable i is less than n and the character at position i in the source string (src) is not the null character ('\0').

+ Details :
> while: The loop construct.
> i < n: The first condition for the loop to continue.
> src[i] != '\0': The second condition for the loop to continue.
> src[i]: Accesses the character at position i in the source string.
> '\0': The null character that marks the end of the string.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> dest[i] = src[i];
+ Purpose :
This line copies the character at position i from the source string (src) to the destination string (dest).

+ Details :
> dest[i]: The character at position i in the destination string.
> src[i]: The character at position i in the source string.

--------------------------------------
-> i++;
+ Purpose :
This line increments the variable i by 1.

+ Details :
> i++: Increments the value of i by 1.

--------------------------------------
-> while (i < n)
+ Purpose :
This line starts a while loop that continues as long as the variable i is less than n.

+ Details :
> while: The loop construct.
> i < n: The condition for the loop to continue.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> dest[i] = '\0';
+ Purpose :
This line adds the null character ('\0') to the destination string (dest) at position i.

+ Details :
> dest[i]: The character at position i in the destination string.
> '\0': The null character.

--------------------------------------
-> i++;
+ Purpose :
This line increments the variable i by 1.

+ Details :
> i++: Increments the value of i by 1.

--------------------------------------
-> return (dest);
+ Purpose :
This line returns the pointer to the destination string (dest).

+ Details :
> return: The keyword used to return a value from the function.
> (dest): The value to be returned.

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
-> char src[] = "ANA GHADI LDAR!";
+ Purpose :
This line declares a character array named src and initializes it with the string "ANA GHADI LDAR!".

+ Details :
> char: The type of the array.
> src[]: The name of the array.
> "ANA GHADI LDAR!": The initial value of the array.

--------------------------------------
-> char dest[15];
+ Purpose :
This line declares a character array named dest with a size of 15.

+ Details :
> char: The type of the array.
> dest[15]: The name of the array with a size of 15.

--------------------------------------
-> ft_strncpy(dest, src, 11);
+ Purpose :
This line calls the ft_strncpy function, passing the arrays dest and src, and the number 11 as arguments.

+ Details :
> ft_strncpy: The name of the function.
> dest: The destination array.
> src: The source array.
> 11: The number of characters to copy.

--------------------------------------
-> printf("source is : %s\n", src);
+ Purpose :
This line prints the source string to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "source is : %s\n": The format string for the message and the string.
> src: The source string to be printed.

--------------------------------------
-> printf("dest is : %s\n", dest);
+ Purpose :
This line prints the destination string to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "dest is : %s\n": The format string for the message and the string.
> dest: The destination string to be printed.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_strncpy' function. ##
*/
