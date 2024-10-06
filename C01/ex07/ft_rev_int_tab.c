/*
	SUBJECT :
	• Create a function which reverses a given array of integer (first goes last, etc).
	• The arguments are a pointer to int and the number of ints in the array.
	• Here’s how it should be prototyped :
	void ft_rev_int_tab(int *tab, int size);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 15:24:29 by root              #+#    #+#             */
/*   Updated: 2024/07/28 16:06:37 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	final;
	int	swap;

	first = 0;
	final = size - 1;
	while (first < final)
	{
		swap = tab[final];
		tab[final] = tab[first];
		tab[first] = swap;
		first++;
		final--;
	}
}
/*
int main ()
{
	int tab[5] = {1,2,3,4,5};

		ft_rev_int_tab(tab,5);

		printf("%d %d %d %d %d",tab[0],tab[1],tab[2],tab[3],tab[4]);
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <stdio.h>
This line includes the standard input-output library (stdio.h).
This header file contains declarations for various functions
that are part of the C standard library, such as printf.

--------------------------------------
-> void ft_rev_int_tab(int *tab, int size)
+ Purpose :
This line defines a function named ft_rev_int_tab.

+ Details :
> void: The function does not return any value.
> ft_rev_int_tab: The name of the function.
> int *tab: The function takes a pointer to an integer array as an argument.
> int size: The function takes an integer representing the size of the array as an argument.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> int first;
+ Purpose :
This line declares an integer variable named first.

+ Details :
> int: The type of the variable.
> first: The name of the variable.

--------------------------------------
-> int final;
+ Purpose :
This line declares an integer variable named final.

+ Details :
> int: The type of the variable.
> final: The name of the variable.

--------------------------------------
-> int swap;
+ Purpose :
This line declares an integer variable named swap.

+ Details :
> int: The type of the variable.
> swap: The name of the variable.

--------------------------------------
-> first = 0;
+ Purpose :
This line initializes the variable first to 0.

+ Details :
> first: The variable to be initialized.
> 0: The initial value.

--------------------------------------
-> final = size - 1;
+ Purpose :
This line initializes the variable final to the last index of the array (size - 1).

+ Details :
> final: The variable to be initialized.
> size - 1: The initial value, which is the last index of the array.

--------------------------------------
-> while (first < final)
+ Purpose :
This line starts a while loop that continues as long as the variable first is less than the variable final.

+ Details :
> while: The loop construct.
> first < final: The condition for the loop to continue.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> swap = tab[final];
+ Purpose :
This line assigns the value at the final index of the array to the variable swap.

+ Details :
> swap: The variable to store the value.
> tab[final]: The value at the final index of the array.

--------------------------------------
-> tab[final] = tab[first];
+ Purpose :
This line assigns the value at the first index of the array to the final index of the array.

+ Details :
> tab[final]: The final index of the array.
> tab[first]: The value at the first index of the array.

--------------------------------------
-> tab[first] = swap;
+ Purpose :
This line assigns the value stored in swap to the first index of the array.

+ Details :
> tab[first]: The first index of the array.
> swap: The value stored in swap.

--------------------------------------
-> first++;
+ Purpose :
This line increments the variable first by 1.

+ Details :
> first++: Increments the value of first by 1.

--------------------------------------
-> final--;
+ Purpose :
This line decrements the variable final by 1.

+ Details :
> final--: Decrements the value of final by 1.

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
-> int tab[5] = {1,2,3,4,5};
+ Purpose :
This line declares an integer array named tab with 5 elements and initializes it with the values {1, 2, 3, 4, 5}.

+ Details :
> int: The type of the array.
> tab[5]: The name of the array with 5 elements.
> {1,2,3,4,5}: The initial values of the array.

--------------------------------------
-> ft_rev_int_tab(tab,5);
+ Purpose :
This line calls the ft_rev_int_tab function, passing the array tab and its size (5) as arguments.

+ Details :
> ft_rev_int_tab: The name of the function.
> tab: The array to be reversed.
> 5: The size of the array.

--------------------------------------
-> printf("%d %d %d %d %d",tab[0],tab[1],tab[2],tab[3],tab[4]);
+ Purpose :
This line prints the elements of the array tab to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "%d %d %d %d %d": The format string for five integers.
> tab[0], tab[1], tab[2], tab[3], tab[4]: The elements of the array to be printed.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_rev_int_tab' function. ##
*/
