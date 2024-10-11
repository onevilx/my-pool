/*
	SUBJECT :
	• We’re dealing with a program here, you should therefore have a function main in your .c file.
	• Create a program that displays its given arguments sorted by ASCII order.
	• It should display all arguments, except for argv[0].
	• One argument per line.
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:09:05 by root              #+#    #+#             */
/*   Updated: 2024/10/11 19:08:32 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printargs(int j, char *av[])
{
	int	i;

	j -= 1;
	while (j >= 1)
	{
		i = 0;
		while (av[j][i])
		{
			write(1, &av[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j--;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char *argv[])
{
	char	*bdel;
	int		a;
	int		b;

	a = 1;
	b = 1;
	if (argc > 1)
	{
		while (b < argc)
		{
			while (a < argc)
			{
				if (ft_strcmp(argv[b], argv[a]) > 0)
				{
					bdel = argv[b];
					argv[b] = argv[a];
					argv[a] = bdel;
				}
				a++;
			}
			a = 1;
			b++;
		}
		printargs(b, argv);
	}
}

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <unistd.h>
+ Purpose :
This line includes the standard input-output library (unistd.h).
This header file contains declarations for various functions
that are part of the C standard library, such as write.

--------------------------------------
-> void printargs(int j, char *av[])
+ Purpose :
This function prints the arguments in reverse order, one per line.

+ Details :
> void: The function does not return a value.
> printargs: The name of the function.
> int j: The number of arguments.
> char *av[]: An array of strings representing the arguments.

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
-> j -= 1;
+ Purpose :
This line decrements the variable j by 1 to start from the last argument.

+ Details :
> j: The variable to be decremented.
> 1: The value to decrement by.

--------------------------------------
-> while (j >= 1)
+ Purpose :
This line starts a while loop that continues as long as j is greater than or equal to 1.

+ Details :
> while: The loop construct.
> j >= 1: The condition to check.
> j: The variable to check.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> i = 0;
+ Purpose :
This line initializes the variable i to 0.

+ Details :
> i: The variable to be initialized.
> 0: The initial value.

--------------------------------------
-> while (av[j][i])
+ Purpose :
This line starts a while loop that continues as long as the character at position i in the current argument (av[j]) is not the null character ('\0').

+ Details :
> while: The loop construct.
> av[j][i]: Accesses the character at position i in the current argument.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> write(1, &av[j][i], 1);
+ Purpose :
This line writes the character at position i in the current argument to the standard output (file descriptor 1).

+ Details :
> write: The function used to write data to a file descriptor.
> 1: The file descriptor for standard output.
> &av[j][i]: The address of the character to write.
> 1: The number of bytes to write.

--------------------------------------
-> i++;
+ Purpose :
This line increments the variable i by 1 to move to the next character in the current argument.

+ Details :
> i++: Increments the value of i by 1.

--------------------------------------
-> }
This line marks the end of the inner while loop.

--------------------------------------
-> write(1, "\n", 1);
+ Purpose :
This line writes a newline character ('\n') to the standard output.

+ Details :
> write: The function used to write data to a file descriptor.
> 1: The file descriptor for standard output.
> "\n": The newline character to write.
> 1: The number of bytes to write.

--------------------------------------
-> j--;
+ Purpose :
This line decrements the variable j by 1 to move to the previous argument.

+ Details :
> j--: Decrements the value of j by 1.

--------------------------------------
-> }
This line marks the end of the outer while loop.

--------------------------------------
-> }
This line marks the end of the printargs function.

--------------------------------------
-> int ft_strcmp(char *s1, char *s2)
+ Purpose :
This function compares two strings lexicographically.

+ Details :
> int: The function returns an integer.
> ft_strcmp: The name of the function.
> char *s1: The first string to compare.
> char *s2: The second string to compare.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> while (*s1 == *s2 && *s1 && *s2)
+ Purpose :
This line starts a while loop that continues as long as the characters in both strings are equal and neither string has reached the null character ('\0').

+ Details :
> while: The loop construct.
> *s1 == *s2 && *s1 && *s2: The condition to check.
> *s1: The current character in the first string.
> *s2: The current character in the second string.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> s1++;
+ Purpose :
This line increments the pointer s1 to move to the next character in the first string.

+ Details :
> s1++: Increments the value of s1 by 1.

--------------------------------------
-> s2++;
+ Purpose :
This line increments the pointer s2 to move to the next character in the second string.

+ Details :
> s2++: Increments the value of s2 by 1.

--------------------------------------
-> }
This line marks the end of the while loop.

--------------------------------------
-> return (*s1 - *s2);
+ Purpose :
This line returns the difference between the ASCII values of the current characters in the two strings.

+ Details :
> return: The keyword used to return a value from the function.
> *s1 - *s2: The difference between the ASCII values of the current characters.

--------------------------------------
-> }
This line marks the end of the ft_strcmp function.

--------------------------------------
-> int main(int argc, char *argv[])
+ Purpose :
This line defines the main function, which is the entry point of the program.

+ Details :
> int: The function returns an integer.
> main: The name of the function.
> int argc: The number of command-line arguments.
> char *argv[]: An array of strings representing the command-line arguments.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> char *bdel;
+ Purpose :
This line declares a pointer to a character named bdel.

+ Details :
> char *: The type of the variable.
> bdel: The name of the variable.

--------------------------------------
-> int a;
+ Purpose :
This line declares an integer variable named a.

+ Details :
> int: The type of the variable.
> a: The name of the variable.

--------------------------------------
-> int b;
+ Purpose :
This line declares an integer variable named b.

+ Details :
> int: The type of the variable.
> b: The name of the variable.

--------------------------------------
-> a = 1;
+ Purpose :
This line initializes the variable a to 1.

+ Details :
> a: The variable to be initialized.
> 1: The initial value.

--------------------------------------
-> b = 1;
+ Purpose :
This line initializes the variable b to 1.

+ Details :
> b: The variable to be initialized.
> 1: The initial value.

--------------------------------------
-> if (argc > 1)
+ Purpose :
This line checks if there are more than one command-line arguments.
The first argument (argv[0]) is always the name of the program.

+ Details :
> if: The conditional statement.
> argc > 1: The condition to check.
> argc: The number of command-line arguments.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the conditional block.

--------------------------------------
-> while (b < argc)
+ Purpose :
This line starts a while loop that continues as long as b is less than argc.

+ Details :
> while: The loop construct.
> b < argc: The condition to check.
> b: The variable to check.
> argc: The number of command-line arguments.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> while (a < argc)
+ Purpose :
This line starts a while loop that continues as long as a is less than argc.

+ Details :
> while: The loop construct.
> a < argc: The condition to check.
> a: The variable to check.
> argc: The number of command-line arguments.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> if (ft_strcmp(argv[b], argv[a]) > 0)
+ Purpose :
This line checks if the string at argv[b] is lexicographically greater than the string at argv[a].

+ Details :
> if: The conditional statement.
> ft_strcmp(argv[b], argv[a]) > 0: The condition to check.
> ft_strcmp: The function used to compare strings.
> argv[b]: The first string to compare.
> argv[a]: The second string to compare.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the conditional block.

--------------------------------------
-> bdel = argv[b];
+ Purpose :
This line assigns the value of argv[b] to the variable bdel.

+ Details :
> bdel: The variable to be assigned.
> argv[b]: The value to assign.

--------------------------------------
-> argv[b] = argv[a];
+ Purpose :
This line assigns the value of argv[a] to argv[b].

+ Details :
> argv[b]: The variable to be assigned.
> argv[a]: The value to assign.

--------------------------------------
-> argv[a] = bdel;
+ Purpose :
This line assigns the value of bdel to argv[a].

+ Details :
> argv[a]: The variable to be assigned.
> bdel: The value to assign.

--------------------------------------
-> }
This line marks the end of the if statement.

--------------------------------------
-> a++;
+ Purpose :
This line increments the variable a by 1 to move to the next argument.

+ Details :
> a++: Increments the value of a by 1.

--------------------------------------
-> }
This line marks the end of the inner while loop.

--------------------------------------
-> a = 1;
+ Purpose :
This line resets the variable a to 1 for the next iteration of the outer loop.

+ Details :
> a: The variable to be reset.
> 1: The value to reset to.

--------------------------------------
-> b++;
+ Purpose :
This line increments the variable b by 1 to move to the next argument.

+ Details :
> b++: Increments the value of b by 1.

--------------------------------------
-> }
This line marks the end of the outer while loop.

--------------------------------------
-> printargs(b, argv);
+ Purpose :
This line calls the printargs function to print the sorted arguments.

+ Details :
> printargs: The function to call.
> b: The number of arguments.
> argv: The array of strings representing the arguments.

--------------------------------------
-> }
This line marks the end of the if statement.

--------------------------------------
-> }
This line marks the end of the main function.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_sort_params' program. ##
*/
