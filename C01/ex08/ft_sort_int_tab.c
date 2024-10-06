/*
	SUBJECT :
	• Create a function which sorts an array of integers by ascending order.
	• The arguments are a pointer to int and the number of ints in the array.
	• Here’s how it should be prototyped :
	void ft_sort_int_tab(int *tab, int size);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:15:23 by root              #+#    #+#             */
/*   Updated: 2024/07/28 18:12:08 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int swap;

    size -= 1;
    i = 0;
    j = 0;
    while (i < size)
    {
        j = i + 1;
        while (j <= size)
        {
            if (tab[i] > tab[j])
            {
                swap = tab[i];
                tab[i] = tab[j];
                tab[j] = swap;
            }
            j++;
        }
        i++;
    }
}

void print_array(int *tab, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main()
{
    int tab[] = {5, 3, 8, 1, 2};
    int size = sizeof(tab) / sizeof(tab[0]);

    printf("Array before sorting: ");
    print_array(tab, size);

    ft_sort_int_tab(tab, size);

    printf("Array after sorting: ");
    print_array(tab, size);

    return 0;
}

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <stdio.h>
This line includes the standard input-output library (stdio.h).
This header file contains declarations for various functions
that are part of the C standard library, such as printf.

--------------------------------------
-> void ft_sort_int_tab(int *tab, int size)
+ Purpose :
This line defines a function named ft_sort_int_tab.

+ Details :
> void: The function does not return any value.
> ft_sort_int_tab: The name of the function.
> int *tab: The function takes a pointer to an integer array as an argument.
> int size: The function takes an integer representing the size of the array as an argument.

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
-> int j;
+ Purpose :
This line declares an integer variable named j.

+ Details :
> int: The type of the variable.
> j: The name of the variable.

--------------------------------------
-> int swap;
+ Purpose :
This line declares an integer variable named swap.

+ Details :
> int: The type of the variable.
> swap: The name of the variable.

--------------------------------------
-> size -= 1;
+ Purpose :
This line decrements the size variable by 1 to adjust the index for the loop.

+ Details :
> size: The variable to be decremented.
> -= 1: Decrements the value of size by 1.

--------------------------------------
-> i = 0;
+ Purpose :
This line initializes the variable i to 0.

+ Details :
> i: The variable to be initialized.
> 0: The initial value.

--------------------------------------
-> j = 0;
+ Purpose :
This line initializes the variable j to 0.

+ Details :
> j: The variable to be initialized.
> 0: The initial value.

--------------------------------------
-> while (i < size)
+ Purpose :
This line starts a while loop that continues as long as the variable i is less than the variable size.

+ Details :
> while: The loop construct.
> i < size: The condition for the loop to continue.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> j = i + 1;
+ Purpose :
This line sets the variable j to the value of i + 1.

+ Details :
> j: The variable to be set.
> i + 1: The value to be assigned to j.

--------------------------------------
-> while (j <= size)
+ Purpose :
This line starts a nested while loop that continues as long as the variable j is less than or equal to the variable size.

+ Details :
> while: The loop construct.
> j <= size: The condition for the loop to continue.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the nested loop body.

--------------------------------------
-> if (tab[i] > tab[j])
+ Purpose :
This line checks if the value at the i-th index of the array is greater than the value at the j-th index of the array.

+ Details :
> if: The conditional statement.
> tab[i] > tab[j]: The condition to be checked.
> tab[i]: The value at the i-th index of the array.
> tab[j]: The value at the j-th index of the array.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the if block.

--------------------------------------
-> swap = tab[i];
+ Purpose :
This line assigns the value at the i-th index of the array to the variable swap.

+ Details :
> swap: The variable to store the value.
> tab[i]: The value at the i-th index of the array.

--------------------------------------
-> tab[i] = tab[j];
+ Purpose :
This line assigns the value at the j-th index of the array to the i-th index of the array.

+ Details :
> tab[i]: The i-th index of the array.
> tab[j]: The value at the j-th index of the array.

--------------------------------------
-> tab[j] = swap;
+ Purpose :
This line assigns the value stored in swap to the j-th index of the array.

+ Details :
> tab[j]: The j-th index of the array.
> swap: The value stored in swap.

--------------------------------------
-> j++;
+ Purpose :
This line increments the variable j by 1.

+ Details :
> j++: Increments the value of j by 1.

--------------------------------------
-> i++;
+ Purpose :
This line increments the variable i by 1.

+ Details :
> i++: Increments the value of i by 1.

--------------------------------------
-> void print_array(int *tab, int size)
+ Purpose :
This line defines a function named print_array.

+ Details :
> void: The function does not return any value.
> print_array: The name of the function.
> int *tab: The function takes a pointer to an integer array as an argument.
> int size: The function takes an integer representing the size of the array as an argument.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> for (int i = 0; i < size; i++)
+ Purpose :
This line starts a for loop that iterates over the elements of the array.

+ Details :
> for: The loop construct.
> int i = 0: Initializes the loop counter i to 0.
> i < size: The condition for the loop to continue.
> i++: Increments the loop counter i by 1.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> printf("%d ", tab[i]);
+ Purpose :
This line prints the value at the i-th index of the array to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "%d ": The format string for an integer followed by a space.
> tab[i]: The value at the i-th index of the array.

--------------------------------------
-> printf("\n");
+ Purpose :
This line prints a newline character to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "\n": The format string for a newline character.

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
-> int tab[] = {5, 3, 8, 1, 2};
+ Purpose :
This line declares an integer array named tab and initializes it with the values {5, 3, 8, 1, 2}.

+ Details :
> int: The type of the array.
> tab[]: The name of the array.
> {5, 3, 8, 1, 2}: The initial values of the array.

--------------------------------------
-> int size = sizeof(tab) / sizeof(tab[0]);
+ Purpose :
This line calculates the size of the array and stores it in the variable size.

+ Details :
> int: The type of the variable.
> size: The name of the variable.
> sizeof(tab): The size of the array in bytes.
> sizeof(tab[0]): The size of a single element of the array in bytes.
> sizeof(tab) / sizeof(tab[0]): The number of elements in the array.

--------------------------------------
-> printf("Array before sorting: ");
+ Purpose :
This line prints a message to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "Array before sorting: ": The format string for the message.

--------------------------------------
-> print_array(tab, size);
+ Purpose :
This line calls the print_array function, passing the array tab and its size as arguments.

+ Details :
> print_array: The name of the function.
> tab: The array to be printed.
> size: The size of the array.

--------------------------------------
-> ft_sort_int_tab(tab, size);
+ Purpose :
This line calls the ft_sort_int_tab function, passing the array tab and its size as arguments.

+ Details :
> ft_sort_int_tab: The name of the function.
> tab: The array to be sorted.
> size: The size of the array.

--------------------------------------
-> printf("Array after sorting: ");
+ Purpose :
This line prints a message to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "Array after sorting: ": The format string for the message.

--------------------------------------
-> print_array(tab, size);
+ Purpose :
This line calls the print_array function, passing the array tab and its size as arguments.

+ Details :
> print_array: The name of the function.
> tab: The array to be printed.
> size: The size of the array.

--------------------------------------
-> return 0;
+ Purpose :
This line returns 0 to indicate successful execution of the program.

+ Details :
> return: The keyword used to return a value from the function.
> 0: The value to be returned.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_sort_int_tab' function. ##
*/
