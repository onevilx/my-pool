/*
	SUBJECT :
	• Reproduce the behavior of the function strlcat (man strlcat).
	• Here’s how it should be prototyped :
	unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:18:09 by root              #+#    #+#             */
/*   Updated: 2024/10/06 19:45:33 by root             ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lsrc;
	unsigned int	ldest;

	i = 0;
	lsrc = ft_strlen(src);
	ldest = ft_strlen(dest);
	if (size <= ldest)
	{
		return (size + lsrc);
	}
	while (src[i] && ldest + i < size - 1)
	{
		dest[ldest + i] = src[i];
		i++;
	}
	dest[ldest + i] = '\0';
	return (ldest + lsrc);
}
/*
int main()
{
	char a[] = "if i told you";
	char b[100] = "i was promised ";
	printf("%d | %s\n", ft_strlcat(b,a,29),b);
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
This line defines a helper function named ft_strlen.

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
-> unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
+ Purpose :
This line defines a function named ft_strlcat.

+ Details :
> unsigned int: The function returns an unsigned integer.
> ft_strlcat: The name of the function.
> char *dest: The function takes a pointer to a character array (destination string) as an argument.
> char *src: The function takes a pointer to a character array (source string) as an argument.
> unsigned int size: The function takes an unsigned integer that specifies the size of the destination buffer.

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
-> unsigned int lsrc;
+ Purpose :
This line declares an unsigned integer variable named lsrc.

+ Details :
> unsigned int: The type of the variable.
> lsrc: The name of the variable.

--------------------------------------
-> unsigned int ldest;
+ Purpose :
This line declares an unsigned integer variable named ldest.

+ Details :
> unsigned int: The type of the variable.
> ldest: The name of the variable.

--------------------------------------
-> i = 0;
+ Purpose :
This line initializes the variable i to 0.

+ Details :
> i: The variable to be initialized.
> 0: The initial value.

--------------------------------------
-> lsrc = ft_strlen(src);
+ Purpose :
This line calculates the length of the source string (src) using the ft_strlen function.

+ Details :
> lsrc: The variable to store the length of the source string.
> ft_strlen(src): The function call to get the length of the source string.

--------------------------------------
-> ldest = ft_strlen(dest);
+ Purpose :
This line calculates the length of the destination string (dest) using the ft_strlen function.

+ Details :
> ldest: The variable to store the length of the destination string.
> ft_strlen(dest): The function call to get the length of the destination string.

--------------------------------------
-> if (size <= ldest)
+ Purpose :
This line checks if the size of the destination buffer is less than or equal to the length of the destination string.

+ Details :
> if: The conditional statement.
> size <= ldest: The condition to check.
> size: The size of the destination buffer.
> ldest: The length of the destination string.

--------------------------------------
-> return (size + lsrc);
+ Purpose :
This line returns the sum of the size of the destination buffer and the length of the source string if the condition is true.

+ Details :
> return: The keyword used to return a value from the function.
> (size + lsrc): The value to be returned.

--------------------------------------
-> while (src[i] && ldest + i < size - 1)
+ Purpose :
This line starts a while loop that continues as long as the character at position i in the source string (src) is not the null character ('\0') and the sum of the length of the destination string and i is less than the size of the destination buffer minus 1.

+ Details :
> while: The loop construct.
> src[i]: Accesses the character at position i in the source string.
> ldest + i < size - 1: The condition for the loop to continue.
> ldest: The length of the destination string.
> i: The current position in the source string.
> size - 1: The size of the destination buffer minus 1.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> dest[ldest + i] = src[i];
+ Purpose :
This line copies the character at position i from the source string (src) to the destination string (dest) at position ldest + i.

+ Details :
> dest[ldest + i]: The character at position ldest + i in the destination string.
> src[i]: The character at position i in the source string.

--------------------------------------
-> i++;
+ Purpose :
This line increments the variable i by 1.

+ Details :
> i++: Increments the value of i by 1.

--------------------------------------
-> dest[ldest + i] = '\0';
+ Purpose :
This line adds the null character ('\0') to the destination string (dest) at position ldest + i.

+ Details :
> dest[ldest + i]: The character at position ldest + i in the destination string.
> '\0': The null character.

--------------------------------------
-> return (ldest + lsrc);
+ Purpose :
This line returns the sum of the length of the destination string and the length of the source string.

+ Details :
> return: The keyword used to return a value from the function.
> (ldest + lsrc): The value to be returned.

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
-> char a[] = "if i told you";
+ Purpose :
This line declares a character array named a and initializes it with the string "if i told you".

+ Details :
> char: The type of the array.
> a[]: The name of the array.
> "if i told you": The initial value of the array.

--------------------------------------
-> char b[100] = "i was promised ";
+ Purpose :
This line declares a character array named b with a size of 100 and initializes it with the string "i was promised ".

+ Details :
> char: The type of the array.
> b[100]: The name of the array with a size of 100.
> "i was promised ": The initial value of the array.

--------------------------------------
-> printf("%d | %s\n", ft_strlcat(b,a,29),b);
+ Purpose :
This line calls the ft_strlcat function, passing the arrays b and a as arguments along with the size 29, and prints the result to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "%d | %s\n": The format string for an integer followed by a string and a newline.
> ft_strlcat(b,a,29): The function call with the arrays b and a as arguments and the size 29.
> b: The modified destination string.

--------------------------------------
-> return 0;
+ Purpose :
This line returns 0 to indicate that the program ended successfully.

+ Details :
> return: The keyword used to return a value from the function.
> 0: The value to be returned.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_strlcat' function. ##
*/
