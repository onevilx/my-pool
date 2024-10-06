/*
	SUBJECT :
	This function divides parameters a by b and stores the result in the int pointed by div,
	It also stores the remainder of the division of a by b in the int pointed by mod.
	• Create a function ft_div_mod prototyped like this :
	void ft_div_mod(int a, int b, int *div, int *mod);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:27:01 by root              #+#    #+#             */
/*   Updated: 2024/07/28 18:13:30 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/*
int	main ()
{
	int i = 50;
	int x = 10;
	int div;
	int mod;

	ft_div_mod(i, x, &div, &mod);
		printf("div is : %d \n mod is : %d \n", div, mod);

}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <stdio.h>
This line includes the standard input-output library (stdio.h).
This header file contains declarations for various functions
that are part of the C standard library, such as printf.

--------------------------------------
-> void ft_div_mod(int a, int b, int *div, int *mod)
+ Purpose :
This line defines a function named ft_div_mod.

+ Details :
> void: The function does not return any value.
> ft_div_mod: The name of the function.
> int a, int b: The function takes two integers as arguments.
> int *div, int *mod: The function takes two pointers to integers as arguments.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> *div = (a / b);
+ Purpose :
This line calculates the division of a by b and stores the result in the integer pointed to by div.

+ Details :
> *div: Dereferences the pointer div to store the result.
> (a / b): The division operation.

--------------------------------------
-> *mod = (a % b);
+ Purpose :
This line calculates the remainder of the division of a by b and stores the result in the integer pointed to by mod.

+ Details :
> *mod: Dereferences the pointer mod to store the result.
> (a % b): The modulus operation.

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
-> int i = 50;
+ Purpose :
This line declares an integer variable named i and initializes it to 50.

+ Details :
> int: The type of the variable.
> i: The name of the variable.
> 50: The initial value of the variable.

--------------------------------------
-> int x = 10;
+ Purpose :
This line declares an integer variable named x and initializes it to 10.

+ Details :
> int: The type of the variable.
> x: The name of the variable.
> 10: The initial value of the variable.

--------------------------------------
-> int div;
+ Purpose :
This line declares an integer variable named div.

+ Details :
> int: The type of the variable.
> div: The name of the variable.

--------------------------------------
-> int mod;
+ Purpose :
This line declares an integer variable named mod.

+ Details :
> int: The type of the variable.
> mod: The name of the variable.

--------------------------------------
-> ft_div_mod(i, x, &div, &mod);
+ Purpose :
This line calls the ft_div_mod function, passing the values of i and x, and the addresses of div and mod as arguments.

+ Details :
> ft_div_mod: The name of the function.
> i: The first integer argument.
> x: The second integer argument.
> &div: The address of the variable div.
> &mod: The address of the variable mod.

--------------------------------------
-> printf("div is : %d \n mod is : %d \n", div, mod);
+ Purpose :
This line prints the values of div and mod to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "div is : %d \n mod is : %d \n": The format string.
> div: The value of the variable div.
> mod: The value of the variable mod.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_div_mod' function. ##
*/
