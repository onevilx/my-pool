/*
	SUBJECT :
	• Reproduce the behavior of the function strcat (man strcat).
	• Here’s how it should be prototyped :
	char	*ft_strcat(char *dest, char *src);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:41:15 by root              #+#    #+#             */
/*   Updated: 2024/10/06 19:33:19 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[i] != '\0')
	{
		dest[i + n] = src[i];
		i++;
	}
	dest[i + n] = '\0';
	return (dest);
}
/*int	main()
{
	char s1[] = "world";
	char s2[] = "hello ";
	printf("%s", ft_strcat(s2,s1));
}*/

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <stdio.h>
This line includes the standard input-output library (stdio.h).
This header file contains declarations for various functions
that are part of the C standard library, such as printf.

--------------------------------------
-> char *ft_strcat(char *dest, char *src)
+ Purpose :
This line defines a function named ft_strcat.

+ Details :
> char *: The function returns a pointer to a character.
> ft_strcat: The name of the function.
> char *dest: The function takes a pointer to a character array (destination string) as an argument.
> char *src: The function takes a pointer to a character array (source string) as an argument.

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
-> int n;
+ Purpose :
This line declares an integer variable named n.

+ Details :
> int: The type of the variable.
> n: The name of the variable.

--------------------------------------
-> i = 0;
+ Purpose :
This line initializes the variable i to 0.

+ Details :
> i: The variable to be initialized.
> 0: The initial value.

--------------------------------------
-> n = 0;
+ Purpose :
This line initializes the variable n to 0.

+ Details :
> n: The variable to be initialized.
> 0: The initial value.

--------------------------------------
-> while (dest[n] != '\0')
+ Purpose :
This line starts a while loop that continues as long as the character at position n in the destination string (dest) is not the null character ('\0').

+ Details :
> while: The loop construct.
> dest[n] != '\0': The condition for the loop to continue.
> dest[n]: Accesses the character at position n in the destination string.
> '\0': The null character that marks the end of the string.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> n++;
+ Purpose :
This line increments the variable n by 1.

+ Details :
> n++: Increments the value of n by 1.

--------------------------------------
-> while (src[i] != '\0')
+ Purpose :
This line starts a while loop that continues as long as the character at position i in the source string (src) is not the null character ('\0').

+ Details :
> while: The loop construct.
> src[i] != '\0': The condition for the loop to continue.
> src[i]: Accesses the character at position i in the source string.
> '\0': The null character that marks the end of the string.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> dest[i + n] = src[i];
+ Purpose :
This line copies the character at position i from the source string (src) to the destination string (dest) at position i + n.

+ Details :
> dest[i + n]: The character at position i + n in the destination string.
> src[i]: The character at position i in the source string.

--------------------------------------
-> i++;
+ Purpose :
This line increments the variable i by 1.

+ Details :
> i++: Increments the value of i by 1.

--------------------------------------
-> dest[i + n] = '\0';
+ Purpose :
This line adds the null character ('\0') to the destination string (dest) at position i + n.

+ Details :
> dest[i + n]: The character at position i + n in the destination string.
> '\0': The null character.

--------------------------------------
-> return (dest);
+ Purpose :
This line returns the pointer to the modified destination string (dest).

+ Details :
> return: The keyword used to return a value from the function.
> (dest): The value to be returned.

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
-> char s1[] = "world";
+ Purpose :
This line declares a character array named s1 and initializes it with the string "world".

+ Details :
> char: The type of the array.
> s1[]: The name of the array.
> "world": The initial value of the array.

--------------------------------------
-> char s2[] = "hello ";
+ Purpose :
This line declares a character array named s2 and initializes it with the string "hello ".

+ Details :
> char: The type of the array.
> s2[]: The name of the array.
> "hello ": The initial value of the array.

--------------------------------------
-> printf("%s", ft_strcat(s2,s1));
+ Purpose :
This line calls the ft_strcat function, passing the arrays s2 and s1 as arguments, and prints the result to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "%s": The format string for a string.
> ft_strcat(s2,s1): The function call with the arrays s2 and s1 as arguments.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_strcat' function. ##
*/
