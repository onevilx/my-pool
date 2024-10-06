/*
	SUBJECT :
	This function divides parameters a by b. The result of this division is stored in the int pointed by a.
	The remainder of the division is stored in the int pointed by b.
	• Create a function ft_ultimate_div_mod with the following prototype :
	void ft_ultimate_div_mod(int *a, int *b);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 18:14:13 by root              #+#    #+#             */
/*   Updated: 2024/07/27 18:51:59 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	div;
	int	mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}
/*
int	main ()
{
	int x = 10;
	int y = 5;

	ft_ultimate_div_mod(&x, &y);

	printf("division is : %d \n modulo is : %d \n", x , y);
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <stdio.h>
This line includes the standard input-output library (stdio.h).
This header file contains declarations for various functions
that are part of the C standard library, such as printf.

--------------------------------------
-> void ft_ultimate_div_mod(int *a, int *b)
+ Purpose :
This line defines a function named ft_ultimate_div_mod.

+ Details :
> void: The function does not return any value.
> ft_ultimate_div_mod: The name of the function.
> int *a, int *b: The function takes two pointers to integers as arguments.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

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
-> div = (*a / *b);
+ Purpose :
This line calculates the division of the value pointed to by a by the value pointed to by b and stores the result in the variable div.

+ Details :
> div: The variable to store the result.
> *a: Dereferences the pointer a to get the value it points to.
> *b: Dereferences the pointer b to get the value it points to.
> (*a / *b): The division operation.

--------------------------------------
-> mod = (*a % *b);
+ Purpose :
This line calculates the remainder of the division of the value pointed to by a by the value pointed to by b and stores the result in the variable mod.

+ Details :
> mod: The variable to store the result.
> *a: Dereferences the pointer a to get the value it points to.
> *b: Dereferences the pointer b to get the value it points to.
> (*a % *b): The modulus operation.

--------------------------------------
-> *a = div;
+ Purpose :
This line assigns the value of div to the location pointed to by a.

+ Details :
> *a: Dereferences the pointer a to set the value it points to.
> div: The variable containing the result of the division.

--------------------------------------
-> *b = mod;
+ Purpose :
This line assigns the value of mod to the location pointed to by b.

+ Details :
> *b: Dereferences the pointer b to set the value it points to.
> mod: The variable containing the result of the modulus operation.

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
-> int x = 10;
+ Purpose :
This line declares an integer variable named x and initializes it to 10.

+ Details :
> int: The type of the variable.
> x: The name of the variable.
> 10: The initial value of the variable.

--------------------------------------
-> int y = 5;
+ Purpose :
This line declares an integer variable named y and initializes it to 5.

+ Details :
> int: The type of the variable.
> y: The name of the variable.
> 5: The initial value of the variable.

--------------------------------------
-> ft_ultimate_div_mod(&x, &y);
+ Purpose :
This line calls the ft_ultimate_div_mod function, passing the addresses of x and y as arguments.

+ Details :
> ft_ultimate_div_mod: The name of the function.
> &x: The address of the variable x.
> &y: The address of the variable y.

--------------------------------------
-> printf("division is : %d \n modulo is : %d \n", x , y);
+ Purpose :
This line prints the values of x and y to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "division is : %d \n modulo is : %d \n": The format string.
> x: The value of the variable x.
> y: The value of the variable y.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_ultimate_div_mod' function. ##
*/
