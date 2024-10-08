/*
	SUBJECT :
	• Create a function that returns the square root of a number (if it exists), 
	or 0 if the square root is an irrational number.
	• Here’s how it should be prototyped :
	int ft_sqrt(int nb);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:57:13 by root              #+#    #+#             */
/*   Updated: 2024/10/08 17:24:44 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	if (nb == 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	if (nb > 1)
	{
		while (i * i <= nb)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d",ft_sqrt(125));
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> int ft_sqrt(int nb)
+ Purpose :
This line defines a function named ft_sqrt.

+ Details :
> int: The function returns an integer.
> ft_sqrt: The name of the function.
> int nb: The function takes an integer as an argument, which represents the number for which the square root is to be calculated.

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
-> i = 2;
+ Purpose :
This line initializes the variable i to 2.

+ Details :
> i: The variable to be initialized.
> 2: The initial value.

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
-> return (0);
+ Purpose :
This line returns 0 if the argument nb is equal to 0.

+ Details :
> return: The keyword used to return a value from the function.
> 0: The value to be returned.

--------------------------------------
-> if (nb == 1)
+ Purpose :
This line checks if the argument nb is equal to 1.

+ Details :
> if: The conditional statement.
> nb == 1: The condition to check.
> nb: The variable to be checked.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the conditional block.

--------------------------------------
-> return (1);
+ Purpose :
This line returns 1 if the argument nb is equal to 1.

+ Details :
> return: The keyword used to return a value from the function.
> 1: The value to be returned.

--------------------------------------
-> if (nb > 1)
+ Purpose :
This line checks if the argument nb is greater than 1.

+ Details :
> if: The conditional statement.
> nb > 1: The condition to check.
> nb: The variable to be checked.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the conditional block.

--------------------------------------
-> while (i * i <= nb)
+ Purpose :
This line starts a while loop that continues as long as i * i is less than or equal to nb.

+ Details :
> while: The loop construct.
> i * i <= nb: The condition to check.
> i: The variable to be checked.
> nb: The argument to be checked.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> if (i * i == nb)
+ Purpose :
This line checks if i * i is equal to nb.

+ Details :
> if: The conditional statement.
> i * i == nb: The condition to check.
> i: The variable to be checked.
> nb: The argument to be checked.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the conditional block.

--------------------------------------
-> return (i);
+ Purpose :
This line returns the value of i if i * i is equal to nb.

+ Details :
> return: The keyword used to return a value from the function.
> i: The value to be returned.

--------------------------------------
-> i++;
+ Purpose :
This line increments the value of i by 1.

+ Details :
> i++: Increments the value of i by 1.

--------------------------------------
-> return (0);
+ Purpose :
This line returns 0 if no integer square root is found for nb.

+ Details :
> return: The keyword used to return a value from the function.
> 0: The value to be returned.

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
-> printf("%d",ft_sqrt(125));
+ Purpose :
This line prints the integer result of the ft_sqrt function called with the argument 125.

+ Details :
> printf: The function used to print formatted output.
> "%d": The format string for an integer.
> ft_sqrt(125): The function call with the argument 125.

--------------------------------------
-> return 0;
+ Purpose :
This line returns 0 to indicate that the program ended successfully.

+ Details :
> return: The keyword used to return a value from the function.
> 0: The value to be returned.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_sqrt' function. ##
*/
