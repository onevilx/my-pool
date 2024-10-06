/*
	SUBJECT :
	• Reproduce the behavior of the function strlcpy (man strlcpy).
	• Here’s how it should be prototyped :
	unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 21:29:21 by root              #+#    #+#             */
/*   Updated: 2024/10/06 19:23:22 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size == 0)
	{
		return (len);
	}
	while (src[i] && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
int	main ()
{
	char src[] = "this is a cruel world!";
	char dest[30];
	int res = ft_strlcpy(dest, src, 22);

	printf("%d\n", res);

	printf("%s\n" , dest);
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <stdio.h>
This line includes the standard input-output library (stdio.h).
This header file contains declarations for various functions
that are part of the C standard library, such as printf.

--------------------------------------
-> unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
+ Purpose :
This line defines a function named ft_strlcpy.

+ Details :
> unsigned int: The function returns an unsigned integer.
> ft_strlcpy: The name of the function.
> char *dest: The function takes a pointer to a character array (destination) as an argument.
> char *src: The function takes a pointer to a character array (source) as an argument.
> unsigned int size: The function takes an unsigned integer representing the size of the destination buffer.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> unsigned int len;
+ Purpose :
This line declares an unsigned integer variable named len.

+ Details :
> unsigned int: The type of the variable.
> len: The name of the variable.

--------------------------------------
-> unsigned int i;
+ Purpose :
This line declares an unsigned integer variable named i.

+ Details :
> unsigned int: The type of the variable.
> i: The name of the variable.

--------------------------------------
-> len = 0;
+ Purpose :
This line initializes the variable len to 0.

+ Details :
> len: The variable to be initialized.
> 0: The initial value.

--------------------------------------
-> i = 0;
+ Purpose :
This line initializes the variable i to 0.

+ Details :
> i: The variable to be initialized.
> 0: The initial value.

--------------------------------------
-> while (src[len] != '\0')
+ Purpose :
This line starts a while loop that continues as long as the character at position len in the source string (src) is not the null character ('\0').

+ Details :
> while: The loop construct.
> src[len] != '\0': The condition for the loop to continue.
> src[len]: Accesses the character at position len in the source string.
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
-> if (size == 0)
+ Purpose :
This line checks if the size of the destination buffer is 0.

+ Details :
> if: The conditional construct.
> size == 0: The condition to be checked.

--------------------------------------
-> return (len);
+ Purpose :
This line returns the length of the source string (len) if the size of the destination buffer is 0.

+ Details :
> return: The keyword used to return a value from the function.
> (len): The value to be returned.

--------------------------------------
-> while (src[i] && i < size -1)
+ Purpose :
This line starts a while loop that continues as long as the character at position i in the source string (src) is not the null character ('\0') and i is less than size - 1.

+ Details :
> while: The loop construct.
> src[i]: Accesses the character at position i in the source string.
> i < size - 1: The condition for the loop to continue.

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
-> dest[i] = '\0';
+ Purpose :
This line adds the null character ('\0') to the destination string (dest) at position i.

+ Details :
> dest[i]: The character at position i in the destination string.
> '\0': The null character.

--------------------------------------
-> return (len);
+ Purpose :
This line returns the length of the source string (len).

+ Details :
> return: The keyword used to return a value from the function.
> (len): The value to be returned.

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
-> char src[] = "this is a cruel world!";
+ Purpose :
This line declares a character array named src and initializes it with the string "this is a cruel world!".

+ Details :
> char: The type of the array.
> src[]: The name of the array.
> "this is a cruel world!": The initial value of the array.

--------------------------------------
-> char dest[30];
+ Purpose :
This line declares a character array named dest with a size of 30.

+ Details :
> char: The type of the array.
> dest[30]: The name of the array with a size of 30.

--------------------------------------
-> int res = ft_strlcpy(dest, src, 22);
+ Purpose :
This line calls the ft_strlcpy function, passing the arrays dest and src, and the number 22 as arguments, and stores the result in the variable res.

+ Details :
> int res: Declares an integer variable named res.
> ft_strlcpy: The name of the function.
> dest: The destination array.
> src: The source array.
> 22: The size of the destination buffer.

--------------------------------------
-> printf("%d\n", res);
+ Purpose :
This line prints the result of the ft_strlcpy function to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "%d\n": The format string for an integer followed by a newline.
> res: The result to be printed.

--------------------------------------
-> printf("%s\n" , dest);
+ Purpose :
This line prints the modified destination string to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "%s\n": The format string for a string followed by a newline.
> dest: The modified destination string to be printed.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_strlcpy' function. ##
*/
