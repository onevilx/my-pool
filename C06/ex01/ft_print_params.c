/*
	SUBJECT :
	• We’re dealing with a program here, you should therefore have a function main in your .c file.
	• Create a program that displays its given arguments.
	• One per line, in the same order as in the command line.
	• It should display all arguments, except for argv[0].
	• Example :
	$>./a.out test1 test2 test3 | cat -e
	test1$
	test2$
	test3$
	$>
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:21:12 by root              #+#    #+#             */
/*   Updated: 2024/10/11 18:54:14 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;
	int	i;

	i = 0;
	j = 1;
	if (argc > 1)
	{
		while (j < argc)
		{
			while (argv[j][i])
			{
				write(1, &argv[j][i], 1);
				i++;
			}
			i = 0;
			j++;
			write(1, "\n", 1);
		}
	}
	return (0);
}

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <unistd.h>
+ Purpose :
This line includes the standard input-output library (unistd.h).
This header file contains declarations for various functions
that are part of the C standard library, such as write.

--------------------------------------
-> int main(int argc, char **argv)
+ Purpose :
This line defines the main function, which is the entry point of the program.

+ Details :
> int: The function returns an integer.
> main: The name of the function.
> int argc: The number of command-line arguments.
> char **argv: An array of strings representing the command-line arguments.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> int j;
+ Purpose :
This line declares an integer variable named j.

+ Details :
> int: The type of the variable.
> j: The name of the variable.

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
-> j = 1;
+ Purpose :
This line initializes the variable j to 1.

+ Details :
> j: The variable to be initialized.
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
-> while (j < argc)
+ Purpose :
This line starts a while loop that continues as long as j is less than argc.

+ Details :
> while: The loop construct.
> j < argc: The condition to check.
> j: The current index of the command-line arguments.
> argc: The number of command-line arguments.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> while (argv[j][i])
+ Purpose :
This line starts a while loop that continues as long as the character at position i in the current argument (argv[j]) is not the null character ('\0').

+ Details :
> while: The loop construct.
> argv[j][i]: Accesses the character at position i in the current argument.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> write(1, &argv[j][i], 1);
+ Purpose :
This line writes the character at position i in the current argument to the standard output (file descriptor 1).

+ Details :
> write: The function used to write data to a file descriptor.
> 1: The file descriptor for standard output.
> &argv[j][i]: The address of the character to write.
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
-> i = 0;
+ Purpose :
This line resets the variable i to 0 for the next argument.

+ Details :
> i: The variable to be reset.
> 0: The value to reset to.

--------------------------------------
-> j++;
+ Purpose :
This line increments the variable j by 1 to move to the next argument.

+ Details :
> j++: Increments the value of j by 1.

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
-> }
This line marks the end of the outer while loop.

--------------------------------------
-> }
This line marks the end of the if statement.

--------------------------------------
-> return (0);
+ Purpose :
This line returns 0 to indicate that the program ended successfully.

+ Details :
> return: The keyword used to return a value from the function.
> 0: The value to be returned.

--------------------------------------
-> }
This line marks the end of the main function.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_print_params' program. ##
*/
