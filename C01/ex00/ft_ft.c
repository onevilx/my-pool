/*
	SUBJECT :
	Create a function that takes a pointer to int as a parameter, and sets the value "42" to that int.
	• Here’s how it should be prototyped :
	void ft_ft(int *nbr);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 13:29:21 by root              #+#    #+#             */
/*   Updated: 2024/09/11 03:07:06 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int main ()
{
	int x;	

	int	*nbr = &x;

	ft_ft(&x);

	printf("%d\n",x);
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <stdio.h>
This line includes the standard input-output library (stdio.h).
This header file contains declarations for various functions
that are part of the C standard library, such as printf.

--------------------------------------
-> void ft_ft(int *nbr)
+ Purpose :
This line defines a function named ft_ft.

+ Details :
> void: The function does not return any value.
> ft_ft: The name of the function.
> int *nbr: The function takes a pointer to an integer as an argument.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> *nbr = 42;
+ Purpose :
This line sets the value of the integer pointed to by nbr to 42.

+ Details :
> *nbr: Dereferences the pointer nbr.
> 42: The value to be assigned to the integer pointed to by nbr.

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
-> int x;
+ Purpose :
This line declares an integer variable named x.

+ Details :
> int: The type of the variable.
> x: The name of the variable.

--------------------------------------
-> int *nbr = &x;
+ Purpose :
This line declares a pointer to an integer named nbr and initializes it to point to the address of x.

+ Details :
> int *: The type of the pointer.
> nbr: The name of the pointer.
> &x: The address of the variable x.

--------------------------------------
-> ft_ft(&x);
+ Purpose :
This line calls the ft_ft function, passing the address of x as an argument.

+ Details :
> ft_ft: The name of the function.
> &x: The address of the variable x.

--------------------------------------
-> printf("%d\n", x);
+ Purpose :
This line prints the value of x to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "%d\n": The format specifier for an integer followed by a newline character.
> x: The variable whose value is to be printed.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_ft' function. ##
*/
