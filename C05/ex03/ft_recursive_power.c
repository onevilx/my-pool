/*
	SUBJECT :
	• Create a recursive function that returns the value of a power applied to a number.
	• A power lower than 0 returns 0.
	• Overflows must not be handled, the function return will be undefined.
	• We’ve decided that 0 power 0 will returns 1
	• Here’s how it should be prototyped :
	int ft_recursive_power(int nb, int power);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 15:20:15 by root              #+#    #+#             */
/*   Updated: 2024/10/08 17:16:10 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
		return (ft_recursive_power(nb, power - 1) * nb);
}
/*
#include <stdio.h>
int main ()
{
	printf("%d",ft_recursive_power(2,-1));
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> int ft_recursive_power(int nb, int power)
+ Purpose :
This line defines a function named ft_recursive_power.

+ Details :
> int: The function returns an integer.
> ft_recursive_power: The name of the function.
> int nb: The base number.
> int power: The exponent to which the base number is raised.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> if (power < 0)
+ Purpose :
This line checks if the argument power is less than 0.

+ Details :
> if: The conditional statement.
> power < 0: The condition to check.
> power: The variable to be checked.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the conditional block.

--------------------------------------
-> return (0);
+ Purpose :
This line returns 0 if the argument power is less than 0.

+ Details :
> return: The keyword used to return a value from the function.
> 0: The value to be returned.

--------------------------------------
-> else if (power == 0)
+ Purpose :
This line checks if the argument power is equal to 0.

+ Details :
> else if: The conditional statement.
> power == 0: The condition to check.
> power: The variable to be checked.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the conditional block.

--------------------------------------
-> return (1);
+ Purpose :
This line returns 1 if the argument power is equal to 0.

+ Details :
> return: The keyword used to return a value from the function.
> 1: The value to be returned.

--------------------------------------
-> else
+ Purpose :
This line handles the case where power is greater than 0.

+ Details :
> else: The conditional statement.

--------------------------------------
-> return (ft_recursive_power(nb, power - 1) * nb);
+ Purpose :
This line returns the result of raising nb to the power by recursively calling ft_recursive_power with power - 1 and multiplying the result by nb.

+ Details :
> return: The keyword used to return a value from the function.
> ft_recursive_power(nb, power - 1): Recursive call to the function with power - 1.
> * nb: Multiplies the result of the recursive call by nb.

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
-> printf("%d",ft_recursive_power(2,-1));
+ Purpose :
This line prints the integer result of the ft_recursive_power function called with the arguments 2 and -1.

+ Details :
> printf: The function used to print formatted output.
> "%d": The format string for an integer.
> ft_recursive_power(2,-1): The function call with the arguments 2 and -1.

--------------------------------------
-> return 0;
+ Purpose :
This line returns 0 to indicate that the program ended successfully.

+ Details :
> return: The keyword used to return a value from the function.
> 0: The value to be returned.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_recursive_power' function. ##
*/
