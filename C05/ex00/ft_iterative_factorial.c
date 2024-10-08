/*
	SUBJECT :
	• Create an iterated function that returns a number. This number is the result of a factorial operation 
	based on the number given as a parameter.
	• If the argument is not valid the function should return 0.
	• Overflows must not be handled, the function return will be undefined.
	• Here’s how it should be prototyped :int ft_iterative_factorial(int nb);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:47:27 by root              #+#    #+#             */
/*   Updated: 2024/10/08 17:07:50 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb > 0)
	{
		res *= nb;
		--nb;
	}
	return (res);
}
/*#include <stdio.h>
int main ()
{
	printf("%d",ft_iterative_factorial(5));
}*/

/* EXPLAINING THE CODE :

--------------------------------------
-> int ft_iterative_factorial(int nb)
+ Purpose :
This line defines a function named ft_iterative_factorial.

+ Details :
> int: The function returns an integer.
> ft_iterative_factorial: The name of the function.
> int nb: The function takes an integer as an argument.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> int res;
+ Purpose :
This line declares an integer variable named res.

+ Details :
> int: The type of the variable.
> res: The name of the variable.

--------------------------------------
-> res = 1;
+ Purpose :
This line initializes the variable res to 1.

+ Details :
> res: The variable to be initialized.
> 1: The initial value.

--------------------------------------
-> if (nb < 0)
+ Purpose :
This line checks if the argument nb is less than 0.

+ Details :
> if: The conditional statement.
> nb < 0: The condition to check.
> nb: The variable to be checked.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the conditional block.

--------------------------------------
-> return (0);
+ Purpose :
This line returns 0 if the argument nb is less than 0.

+ Details :
> return: The keyword used to return a value from the function.
> 0: The value to be returned.

--------------------------------------
-> if (nb == 0)
+ Purpose :
This line checks if the argument nb is equal to 0.

+ Details :
> if: The conditional statement.
> nb == 0: The condition to check.
> nb: The variable to be checked.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the conditional block.

--------------------------------------
-> return (1);
+ Purpose :
This line returns 1 if the argument nb is equal to 0.

+ Details :
> return: The keyword used to return a value from the function.
> 1: The value to be returned.

--------------------------------------
-> while (nb > 0)
+ Purpose :
This line starts a while loop that continues as long as nb is greater than 0.

+ Details :
> while: The loop construct.
> nb > 0: The condition to check.
> nb: The variable to be checked.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> res *= nb;
+ Purpose :
This line multiplies the current value of res by nb and stores the result back in res.

+ Details :
> res *= nb: Multiplies res by nb and assigns the result to res.

--------------------------------------
-> --nb;
+ Purpose :
This line decrements the value of nb by 1.

+ Details :
> --nb: Decrements the value of nb by 1.

--------------------------------------
-> return (res);
+ Purpose :
This line returns the final value of res, which is the factorial of the input nb.

+ Details :
> return: The keyword used to return a value from the function.
> res: The value to be returned.

--------------------------------------
-> #include <stdio.h>
This line includes the standard input-output library (stdio.h).
This header file contains declarations for various functions
that are part of the C standard library, such as printf.

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
-> printf("%d",ft_iterative_factorial(5));
+ Purpose :
This line prints the integer result of the ft_iterative_factorial function called with the argument 5.

+ Details :
> printf: The function used to print formatted output.
> "%d": The format string for an integer.
> ft_iterative_factorial(5): The function call with the argument 5.

--------------------------------------
-> return 0;
+ Purpose :
This line returns 0 to indicate that the program ended successfully.

+ Details :
> return: The keyword used to return a value from the function.
> 0: The value to be returned.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_iterative_factorial' function. ##
*/
