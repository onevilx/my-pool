/*
	SUBJECT :
	• Create a function that returns the next prime number greater or equal to the number given as argument.
	• Here’s how it should be prototyped :
	int ft_find_next_prime(int nb);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:25:19 by root              #+#    #+#             */
/*   Updated: 2024/10/08 17:30:08 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < i)
	{
		return (0);
	}
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
	{
		return (2);
	}
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n",ft_find_next_prime(25));
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> int ft_is_prime(int nb)
+ Purpose :
This line defines a function named ft_is_prime.

+ Details :
> int: The function returns an integer.
> ft_is_prime: The name of the function.
> int nb: The function takes an integer as an argument, which represents the number to be checked for primality.

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
-> if (nb < i)
+ Purpose :
This line checks if the argument nb is less than 2.

+ Details :
> if: The conditional statement.
> nb < i: The condition to check.
> nb: The variable to be checked.
> i: The value to compare against (2 in this case).

--------------------------------------
-> {/} :
This line marks the beginning and the end of the conditional block.

--------------------------------------
-> return (0);
+ Purpose :
This line returns 0 if the argument nb is less than 2.

+ Details :
> return: The keyword used to return a value from the function.
> 0: The value to be returned.

--------------------------------------
-> while (i <= nb / 2)
+ Purpose :
This line starts a while loop that continues as long as i is less than or equal to nb / 2.

+ Details :
> while: The loop construct.
> i <= nb / 2: The condition to check.
> i: The variable to be checked.
> nb / 2: The value to compare against.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> if (nb % i == 0)
+ Purpose :
This line checks if nb is divisible by i.

+ Details :
> if: The conditional statement.
> nb % i == 0: The condition to check.
> nb: The variable to be checked.
> i: The divisor.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the conditional block.

--------------------------------------
-> return (0);
+ Purpose :
This line returns 0 if nb is divisible by i, indicating that nb is not a prime number.

+ Details :
> return: The keyword used to return a value from the function.
> 0: The value to be returned.

--------------------------------------
-> i++;
+ Purpose :
This line increments the value of i by 1.

+ Details :
> i++: Increments the value of i by 1.

--------------------------------------
-> return (1);
+ Purpose :
This line returns 1 if nb is not divisible by any number from 2 to nb / 2, indicating that nb is a prime number.

+ Details :
> return: The keyword used to return a value from the function.
> 1: The value to be returned.

--------------------------------------
-> int ft_find_next_prime(int nb)
+ Purpose :
This line defines a function named ft_find_next_prime.

+ Details :
> int: The function returns an integer.
> ft_find_next_prime: The name of the function.
> int nb: The function takes an integer as an argument, which represents the starting number to find the next prime number.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> if (nb <= 2)
+ Purpose :
This line checks if the argument nb is less than or equal to 2.

+ Details :
> if: The conditional statement.
> nb <= 2: The condition to check.
> nb: The variable to be checked.
> 2: The value to compare against.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the conditional block.

--------------------------------------
-> return (2);
+ Purpose :
This line returns 2 if the argument nb is less than or equal to 2.

+ Details :
> return: The keyword used to return a value from the function.
> 2: The value to be returned.

--------------------------------------
-> while (nb >= 2)
+ Purpose :
This line starts a while loop that continues as long as nb is greater than or equal to 2.

+ Details :
> while: The loop construct.
> nb >= 2: The condition to check.
> nb: The variable to be checked.
> 2: The value to compare against.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> if (ft_is_prime(nb) == 1)
+ Purpose :
This line checks if nb is a prime number by calling the ft_is_prime function.

+ Details :
> if: The conditional statement.
> ft_is_prime(nb) == 1: The condition to check.
> ft_is_prime(nb): The function call with the argument nb.
> 1: The value to compare against.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the conditional block.

--------------------------------------
-> return (nb);
+ Purpose :
This line returns nb if it is a prime number.

+ Details :
> return: The keyword used to return a value from the function.
> nb: The value to be returned.

--------------------------------------
-> nb++;
+ Purpose :
This line increments the value of nb by 1.

+ Details :
> nb++: Increments the value of nb by 1.

--------------------------------------
-> return (0);
+ Purpose :
This line returns 0 if no prime number is found.

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
-> printf("%d\n",ft_find_next_prime(25));
+ Purpose :
This line prints the integer result of the ft_find_next_prime function called with the argument 25.

+ Details :
> printf: The function used to print formatted output.
> "%d\n": The format string for an integer followed by a newline.
> ft_find_next_prime(25): The function call with the argument 25.

--------------------------------------
-> return 0;
+ Purpose :
This line returns 0 to indicate that the program ended successfully.

+ Details :
> return: The keyword used to return a value from the function.
> 0: The value to be returned.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_find_next_prime' function. ##
*/
