/*
	SUBJECT :
	Reproduce the behavior of the function strcpy (man strcpy).
	• Here’s how it should be prototyped :
	char *ft_strcpy(char *dest, char *src);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:49:33 by root              #+#    #+#             */
/*   Updated: 2024/10/06 18:43:12 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
void	ft_putstr(char	*str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1,&str[i],1);
		i++;
	}
}

int main ()
{
	char src[] = "wafin afin akhona\n";
	char dest[20];

	ft_putstr(src);

	char *res = ft_strcpy(dest, src);
	ft_putstr(res);
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <unistd.h>
This line includes the Unix standard library (unistd.h).
This header file contains declarations for various functions
that are part of the Unix standard library, such as write.

--------------------------------------
-> char *ft_strcpy(char *dest, char *src)
+ Purpose :
This line defines a function named ft_strcpy.

+ Details :
> char *: The function returns a pointer to a character.
> ft_strcpy: The name of the function.
> char *dest: The function takes a pointer to a character array (destination) as an argument.
> char *src: The function takes a pointer to a character array (source) as an argument.

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
This line adds the null character ('\0') to the end of the destination string (dest) to mark the end of the string.

+ Details :
> dest[i]: The character at position i in the destination string.
> '\0': The null character.

--------------------------------------
-> return (dest);
+ Purpose :
This line returns the pointer to the destination string (dest).

+ Details :
> return: The keyword used to return a value from the function.
> (dest): The value to be returned.

--------------------------------------
-> void ft_putstr(char *str)
+ Purpose :
This line defines a function named ft_putstr.

+ Details :
> void: The function does not return any value.
> ft_putstr: The name of the function.
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
-> while(str[i] != '\0')
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
-> write(1,&str[i],1);
+ Purpose :
This line writes the character at position i in the string (str) to the standard output.

+ Details :
> write: The function used to write data to a file descriptor.
> 1: The file descriptor for standard output (usually the terminal).
> &str[i]: The address of the character at position i in the string.
> 1: The number of bytes to write (1 byte for a single character).

--------------------------------------
-> i++;
+ Purpose :
This line increments the variable i by 1.

+ Details :
> i++: Increments the value of i by 1.

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
-> char src[] = "wafin afin akhona\n";
+ Purpose :
This line declares a character array named src and initializes it with the string "wafin afin akhona\n".

+ Details :
> char: The type of the array.
> src[]: The name of the array.
> "wafin afin akhona\n": The initial value of the array.

--------------------------------------
-> char dest[20];
+ Purpose :
This line declares a character array named dest with a size of 20.

+ Details :
> char: The type of the array.
> dest[20]: The name of the array with a size of 20.

--------------------------------------
-> ft_putstr(src);
+ Purpose :
This line calls the ft_putstr function, passing the string src as an argument.

+ Details :
> ft_putstr: The name of the function.
> src: The string to be printed.

--------------------------------------
-> char *res = ft_strcpy(dest, src);
+ Purpose :
This line calls the ft_strcpy function, passing the arrays dest and src as arguments, and stores the result in the pointer res.

+ Details :
> char *res: The pointer to store the result.
> ft_strcpy: The name of the function.
> dest: The destination array.
> src: The source array.

--------------------------------------
-> ft_putstr(res);
+ Purpose :
This line calls the ft_putstr function, passing the string res as an argument.

+ Details :
> ft_putstr: The name of the function.
> res: The string to be printed.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_strcpy' function. ##
*/
