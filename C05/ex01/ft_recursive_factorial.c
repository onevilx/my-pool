/*
	SUBJECT :
	• Create a recursive function that returns the factorial of the number given as a parameter.
	• If the argument is not valid the function should return 0.
	• Overflows must not be handled, the function return will be undefined.
	• Here’s how it should be prototyped :
	int ft_recursive_factorial(int nb);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:07:24 by root              #+#    #+#             */
/*   Updated: 2024/10/08 17:10:09 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 0;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
		return (ft_recursive_factorial(nb - 1) * nb);
}
/*
int main()
{
	printf("%d",ft_recursive_factorial(5));
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> int ft_recursive_factorial(int nb)
+ Purpose :
This line defines a function named ft_recursive_factorial.

+ Details :
> int: The function returns an integer.
> ft_recursive_factorial: The name of the function.
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
-> res = 0;
+ Purpose :
This line initializes the variable res to 0.

+ Details :
> res: The variable to be initialized.
> 0: The initial value.

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
-> else if (nb == 0 || nb == 1)
+ Purpose :
This line checks if the argument nb is equal to 0 or 1.

+ Details :
> else if: The conditional statement.
> nb == 0 || nb == 1: The condition to check.
> nb: The variable to be checked.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the conditional block.

--------------------------------------
-> return (1);
+ Purpose :
This line returns 1 if the argument nb is equal to 0 or 1.

+ Details :
> return: The keyword used to return a value from the function.
> 1: The value to be returned.

--------------------------------------
-> else
+ Purpose :
This line handles the case where nb is greater than 1.

+ Details :
> else: The conditional statement.

--------------------------------------
-> return (ft_recursive_factorial(nb - 1) * nb);
+ Purpose :
This line returns the factorial of nb by recursively calling ft_recursive_factorial with nb - 1 and multiplying the result by nb.

+ Details :
> return: The keyword used to return a value from the function.
> ft_recursive_factorial(nb - 1): Recursive call to the function with nb - 1.
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
-> printf("%d",ft_recursive_factorial(5));
+ Purpose :
This line prints the integer result of the ft_recursive_factorial function called with the argument 5.

+ Details :
> printf: The function used to print formatted output.
> "%d": The format string for an integer.
> ft_recursive_factorial(5): The function call with the argument 5.

--------------------------------------
-> return 0;
+ Purpose :
This line returns 0 to indicate that the program ended successfully.

+ Details :
> return: The keyword used to return a value from the function.
> 0: The value to be returned.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_recursive_factorial' function. ##
*/
