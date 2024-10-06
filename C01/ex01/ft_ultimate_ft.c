/*
	SUBJECT :
	Create a function that takes a pointer to pointer to pointer to pointer to pointer
	to pointer to pointer to pointer to pointer to int as a parameter and sets the value
	"42" to that int.
	• Here’s how it should be prototyped :
	void ft_ultimate_ft(int *********nbr);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 13:40:09 by root              #+#    #+#             */
/*   Updated: 2024/07/27 15:57:45 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
/*
int	main ()
{
	int i;

	int	*p1 = &i;
	int	**p2 = &p1;
	int	***p3 = &p2;
	int	****p4 = &p3;
	int	*****p5 = &p4;
	int	******p6 = &p5;
	int	*******p7 = &p6;
	int	********p8 = &p7;
	int	*********p9 = &p8;
	
	ft_ultimate_ft(&p8);

	printf("%d\n",i);
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <stdio.h>
This line includes the standard input-output library (stdio.h).
This header file contains declarations for various functions
that are part of the C standard library, such as printf.

--------------------------------------
-> void ft_ultimate_ft(int *********nbr)
+ Purpose :
This line defines a function named ft_ultimate_ft.

+ Details :
> void: The function does not return any value.
> ft_ultimate_ft: The name of the function.
> int *********nbr: The function takes a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to an integer as an argument.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> *********nbr = 42;
+ Purpose :
This line sets the value of the integer pointed to by the chain of pointers to 42.

+ Details :
> *********nbr: Dereferences the chain of pointers to access the integer.
> 42: The value to be assigned to the integer.

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
-> int i;
+ Purpose :
This line declares an integer variable named i.

+ Details :
> int: The type of the variable.
> i: The name of the variable.

--------------------------------------
-> int *p1 = &i;
+ Purpose :
This line declares a pointer to an integer named p1 and initializes it to point to the address of i.

+ Details :
> int *: The type of the pointer.
> p1: The name of the pointer.
> &i: The address of the variable i.

--------------------------------------
-> int **p2 = &p1;
+ Purpose :
This line declares a pointer to a pointer to an integer named p2 and initializes it to point to the address of p1.

+ Details :
> int **: The type of the pointer.
> p2: The name of the pointer.
> &p1: The address of the pointer p1.

--------------------------------------
-> int ***p3 = &p2;
+ Purpose :
This line declares a pointer to a pointer to a pointer to an integer named p3 and initializes it to point to the address of p2.

+ Details :
> int ***: The type of the pointer.
> p3: The name of the pointer.
> &p2: The address of the pointer p2.

--------------------------------------
-> int ****p4 = &p3;
+ Purpose :
This line declares a pointer to a pointer to a pointer to a pointer to an integer named p4 and initializes it to point to the address of p3.

+ Details :
> int ****: The type of the pointer.
> p4: The name of the pointer.
> &p3: The address of the pointer p3.

--------------------------------------
-> int *****p5 = &p4;
+ Purpose :
This line declares a pointer to a pointer to a pointer to a pointer to a pointer to an integer named p5 and initializes it to point to the address of p4.

+ Details :
> int *****: The type of the pointer.
> p5: The name of the pointer.
> &p4: The address of the pointer p4.

--------------------------------------
-> int ******p6 = &p5;
+ Purpose :
This line declares a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to an integer named p6 and initializes it to point to the address of p5.

+ Details :
> int ******: The type of the pointer.
> p6: The name of the pointer.
> &p5: The address of the pointer p5.

--------------------------------------
-> int *******p7 = &p6;
+ Purpose :
This line declares a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to an integer named p7 and initializes it to point to the address of p6.

+ Details :
> int *******: The type of the pointer.
> p7: The name of the pointer.
> &p6: The address of the pointer p6.

--------------------------------------
-> int ********p8 = &p7;
+ Purpose :
This line declares a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to an integer named p8 and initializes it to point to the address of p7.

+ Details :
> int ********: The type of the pointer.
> p8: The name of the pointer.
> &p7: The address of the pointer p7.

--------------------------------------
-> int *********p9 = &p8;
+ Purpose :
This line declares a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to a pointer to an integer named p9 and initializes it to point to the address of p8.

+ Details :
> int *********: The type of the pointer.
> p9: The name of the pointer.
> &p8: The address of the pointer p8.

--------------------------------------
-> ft_ultimate_ft(&p8);
+ Purpose :
This line calls the ft_ultimate_ft function, passing the address of p8 as an argument.

+ Details :
> ft_ultimate_ft: The name of the function.
> &p8: The address of the pointer p8.

--------------------------------------
-> printf("%d\n", i);
+ Purpose :
This line prints the value of i to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "%d\n": The format specifier for an integer followed by a newline character.
> i: The variable whose value is to be printed.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_ultimate_ft' function. ##
*/