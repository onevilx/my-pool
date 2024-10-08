/*
	SUBJECT :
	• Create an iterated function that returns the value of a power applied to a number.
	• A power lower than 0 returns 0.
	• Overflows must not be handled.
	• We’ve decided that 0 power 0 will returns 1
	• Here’s how it should be prototyped :
	int ft_iterative_power(int nb, int power)
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 15:12:07 by root              #+#    #+#             */
/*   Updated: 2024/10/08 17:13:31 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d",ft_iterative_power(4,5));
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> int ft_iterative_power(int nb, int power)
+ Purpose :
This line defines a function named ft_iterative_power.

+ Details :
> int: The function returns an integer.
> ft_iterative_power: The name of the function.
> int nb: The base number.
> int power: The exponent to which the base number is raised.

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
-> if (power == 0)
+ Purpose :
This line checks if the argument power is equal to 0.

+ Details :
> if: The conditional statement.
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
-> while (power > 0)
+ Purpose :
This line starts a while loop that continues as long as power is greater than 0.

+ Details :
> while: The loop construct.
> power > 0: The condition to check.
> power: The variable to be checked.

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
-> power--;
+ Purpose :
This line decrements the value of power by 1.

+ Details :
> power--: Decrements the value of power by 1.

--------------------------------------
-> return (res);
+ Purpose :
This line returns the final value of res, which is the result of raising nb to the power.

+ Details :
> return: The keyword used to return a value from the function.
> res: The value to be returned.

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
-> printf("%d",ft_iterative_power(4,5));
+ Purpose :
This line prints the integer result of the ft_iterative_power function called with the arguments 4 and 5.

+ Details :
> printf: The function used to print formatted output.
> "%d": The format string for an integer.
> ft_iterative_power(4,5): The function call with the arguments 4 and 5.

--------------------------------------
-> return 0;
+ Purpose :
This line returns 0 to indicate that the program ended successfully.

+ Details :
> return: The keyword used to return a value from the function.
> 0: The value to be returned.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_iterative_power' function. ##
*/
