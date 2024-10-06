/*
	SUBJECT :
	• Reproduce the behavior of the function strncat (man strncat).
	• Here’s how it should be prototyped :
	char	*ft_strncat(char *dest, char *src, unsigned int nb);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 20:29:19 by root              #+#    #+#             */
/*   Updated: 2024/10/06 19:34:55 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	n = 0;
	i = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	dest[n] = '\0';
	return (dest);
}
/*int	main ()
{
	char s1[] = "a sat";
	char s2[14] = " wa feen";

	printf("%s",ft_strncat(s2,s1, 1));
}*/

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <stdio.h>
This line includes the standard input-output library (stdio.h).
This header file contains declarations for various functions
that are part of the C standard library, such as printf.

--------------------------------------
-> char *ft_strncat(char *dest, char *src, unsigned int nb)
+ Purpose :
This line defines a function named ft_strncat.

+ Details :
> char *: The function returns a pointer to a character.
> ft_strncat: The name of the function.
> char *dest: The function takes a pointer to a character array (destination string) as an argument.
> char *src: The function takes a pointer to a character array (source string) as an argument.
> unsigned int nb: The function takes an unsigned integer that specifies the maximum number of characters to be appended.

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
-> unsigned int n;
+ Purpose :
This line declares an unsigned integer variable named n.

+ Details :
> unsigned int: The type of the variable.
> n: The name of the variable.

--------------------------------------
-> n = 0;
+ Purpose :
This line initializes the variable n to 0.

+ Details :
> n: The variable to be initialized.
> 0: The initial value.

--------------------------------------
-> i = 0;
+ Purpose :
This line initializes the variable i to 0.

+ Details :
> i: The variable to be initialized.
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
-> while (src[i] != '\0' && i < nb)
+ Purpose :
This line starts a while loop that continues as long as the character at position i in the source string (src) is not the null character ('\0') and i is less than nb.

+ Details :
> while: The loop construct.
> src[i] != '\0': The condition for the loop to continue.
> src[i]: Accesses the character at position i in the source string.
> '\0': The null character that marks the end of the string.
> i < nb: Ensures that the loop does not exceed the specified number of characters to be appended.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> dest[n] = src[i];
+ Purpose :
This line copies the character at position i from the source string (src) to the destination string (dest) at position n.

+ Details :
> dest[n]: The character at position n in the destination string.
> src[i]: The character at position i in the source string.

--------------------------------------
-> n++;
+ Purpose :
This line increments the variable n by 1.

+ Details :
> n++: Increments the value of n by 1.

--------------------------------------
-> i++;
+ Purpose :
This line increments the variable i by 1.

+ Details :
> i++: Increments the value of i by 1.

--------------------------------------
-> dest[n] = '\0';
+ Purpose :
This line adds the null character ('\0') to the destination string (dest) at position n.

+ Details :
> dest[n]: The character at position n in the destination string.
> '\0': The null character.

--------------------------------------
-> return (dest);
+ Purpose :
This line returns the pointer to the modified destination string (dest).

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
-> char s1[] = "a sat";
+ Purpose :
This line declares a character array named s1 and initializes it with the string "a sat".

+ Details :
> char: The type of the array.
> s1[]: The name of the array.
> "a sat": The initial value of the array.

--------------------------------------
-> char s2[14] = " wa feen";
+ Purpose :
This line declares a character array named s2 with a size of 14 and initializes it with the string " wa feen".

+ Details :
> char: The type of the array.
> s2[14]: The name of the array with a size of 14.
> " wa feen": The initial value of the array.

--------------------------------------
-> printf("%s",ft_strncat(s2,s1, 1));
+ Purpose :
This line calls the ft_strncat function, passing the arrays s2 and s1 as arguments along with the number 1, and prints the result to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "%s": The format string for a string.
> ft_strncat(s2,s1, 1): The function call with the arrays s2 and s1 as arguments and the number 1.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_strncat' function. ##
*/
