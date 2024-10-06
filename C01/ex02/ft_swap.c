/*
	SUBJECT :
	Create a function that swaps the value of two integers whose addresses are entered as parameters.
	• Here’s how it should be prototyped :
	void ft_swap(int *a, int *b);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:06:01 by root              #+#    #+#             */
/*   Updated: 2024/07/27 16:17:18 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
/*
int	main ()
{
	int ya = 1;
	int oa = 69;

	printf("young age is : %d and old age : %d\n",ya,oa);

	ft_swap(&ya,&oa);

	printf("young age is : %d and old age : %d\n",ya,oa);
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <stdio.h>
This line includes the standard input-output library (stdio.h).
This header file contains declarations for various functions
that are part of the C standard library, such as printf.

--------------------------------------
-> void ft_swap(int *a, int *b)
+ Purpose :
This line defines a function named ft_swap.

+ Details :
> void: The function does not return any value.
> ft_swap: The name of the function.
> int *a, int *b: The function takes two pointers to integers as arguments.

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
-> x = *a;
+ Purpose :
This line assigns the value pointed to by a to the variable x.

+ Details :
> x: The variable to store the value.
> *a: Dereferences the pointer a to get the value it points to.

--------------------------------------
-> *a = *b;
+ Purpose :
This line assigns the value pointed to by b to the location pointed to by a.

+ Details :
> *a: Dereferences the pointer a to set the value it points to.
> *b: Dereferences the pointer b to get the value it points to.

--------------------------------------
-> *b = x;
+ Purpose :
This line assigns the value stored in x to the location pointed to by b.

+ Details :
> *b: Dereferences the pointer b to set the value it points to.
> x: The variable containing the original value of a.

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
-> int ya = 1;
+ Purpose :
This line declares an integer variable named ya and initializes it to 1.

+ Details :
> int: The type of the variable.
> ya: The name of the variable.
> 1: The initial value of the variable.

--------------------------------------
-> int oa = 69;
+ Purpose :
This line declares an integer variable named oa and initializes it to 69.

+ Details :
> int: The type of the variable.
> oa: The name of the variable.
> 69: The initial value of the variable.

--------------------------------------
-> printf("young age is : %d and old age : %d\n", ya, oa);
+ Purpose :
This line prints the values of ya and oa to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "young age is : %d and old age : %d\n": The format string.
> ya: The value of the variable ya.
> oa: The value of the variable oa.

--------------------------------------
-> ft_swap(&ya, &oa);
+ Purpose :
This line calls the ft_swap function, passing the addresses of ya and oa as arguments.

+ Details :
> ft_swap: The name of the function.
> &ya: The address of the variable ya.
> &oa: The address of the variable oa.

--------------------------------------
-> printf("young age is : %d and old age : %d\n", ya, oa);
+ Purpose :
This line prints the values of ya and oa to the standard output after swapping.

+ Details :
> printf: The function used to print formatted output.
> "young age is : %d and old age : %d\n": The format string.
> ya: The value of the variable ya.
> oa: The value of the variable oa.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_swap' function. ##
*/
