/*
	SUBJECT :
	• Create a function ft_fibonacci that returns the n-th element of the Fibonacci sequence,
	the first element being at the 0 index. We’ll consider that the Fibonacci sequence starts like this: 0, 1, 1, 2.
	• Overflows must not be handled, the function return will be undefined.
	• Here’s how it should be prototyped :
	int ft_fibonacci(int index);
	• Obviously, ft_fibonacci has to be recursive.
	• If the index is less than 0, the function should return -1.
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:15:43 by root              #+#    #+#             */
/*   Updated: 2024/10/08 17:18:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0 || index == 1)
	{
		return (index);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n",ft_fibonacci(5));
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> int ft_fibonacci(int index)
+ Purpose :
This line defines a function named ft_fibonacci.

+ Details :
> int: The function returns an integer.
> ft_fibonacci: The name of the function.
> int index: The function takes an integer as an argument, which represents the position in the Fibonacci sequence.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> if (index < 0)
+ Purpose :
This line checks if the argument index is less than 0.

+ Details :
> if: The conditional statement.
> index < 0: The condition to check.
> index: The variable to be checked.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the conditional block.

--------------------------------------
-> return (-1);
+ Purpose :
This line returns -1 if the argument index is less than 0.

+ Details :
> return: The keyword used to return a value from the function.
> -1: The value to be returned.

--------------------------------------
-> if (index == 0 || index == 1)
+ Purpose :
This line checks if the argument index is equal to 0 or 1.

+ Details :
> if: The conditional statement.
> index == 0 || index == 1: The condition to check.
> index: The variable to be checked.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the conditional block.

--------------------------------------
-> return (index);
+ Purpose :
This line returns the value of index if the argument index is equal to 0 or 1.

+ Details :
> return: The keyword used to return a value from the function.
> index: The value to be returned.

--------------------------------------
-> return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
+ Purpose :
This line returns the Fibonacci number at the given index by recursively calling ft_fibonacci with index - 1 and index - 2 and adding the results.

+ Details :
> return: The keyword used to return a value from the function.
> ft_fibonacci(index - 1): Recursive call to the function with index - 1.
> ft_fibonacci(index - 2): Recursive call to the function with index - 2.
> +: Adds the results of the two recursive calls.

--------------------------------------
-> #include <stdio.h>
This line includes the standard input-output library (stdio.h).
This header file contains declarations for various functions
that are part of the C standard library, such as printf.

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
-> printf("%d\n",ft_fibonacci(5));
+ Purpose :
This line prints the integer result of the ft_fibonacci function called with the argument 5.

+ Details :
> printf: The function used to print formatted output.
> "%d\n": The format string for an integer followed by a newline.
> ft_fibonacci(5): The function call with the argument 5.

--------------------------------------
-> return 0;
+ Purpose :
This line returns 0 to indicate that the program ended successfully.

+ Details :
> return: The keyword used to return a value from the function.
> 0: The value to be returned.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_fibonacci' function. ##
*/
