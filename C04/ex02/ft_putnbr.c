/*
	SUBJECT :
	• Create a function that displays the number entered as a parameter.
	The function has to be able to display all possible values within an int type variable.
	• Here’s how it should be prototyped :
	void	ft_putnbr(int nb);
• For example:
	◦ ft_putnbr(42) displays "42".
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:03:41 by root              #+#    #+#             */
/*   Updated: 2024/10/06 19:58:47 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
/*
int main()
{
	ft_putnbr(-2147483648);
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <unistd.h>
This line includes the standard Unix system call library (unistd.h).
This header file contains declarations for various system call functions,
such as write, which is used to write data to a file descriptor.

--------------------------------------
-> void ft_putchar(char c)
+ Purpose :
This line defines a helper function named ft_putchar.

+ Details :
> void: The function does not return a value.
> ft_putchar: The name of the function.
> char c: The function takes a character as an argument.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> write(1, &c, 1);
+ Purpose :
This line writes the character c to the standard output (file descriptor 1).

+ Details :
> write: The function used to write data to a file descriptor.
> 1: The file descriptor for standard output.
> &c: The address of the character c.
> 1: The number of bytes to write.

--------------------------------------
-> void ft_putnbr(int nb)
+ Purpose :
This line defines a function named ft_putnbr.

+ Details :
> void: The function does not return a value.
> ft_putnbr: The name of the function.
> int nb: The function takes an integer as an argument.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> if (nb == -2147483648)
+ Purpose :
This line checks if the integer nb is equal to the minimum value of a signed 32-bit integer (-2147483648).

+ Details :
> if: The conditional statement.
> nb == -2147483648: The condition to check.
> nb: The integer to be checked.
> -2147483648: The minimum value of a signed 32-bit integer.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the conditional block.

--------------------------------------
-> ft_putchar('-');
+ Purpose :
This line calls the ft_putchar function to write the '-' character to the standard output.

+ Details :
> ft_putchar: The function call.
> '-': The character to be written.

--------------------------------------
-> ft_putchar('2');
+ Purpose :
This line calls the ft_putchar function to write the '2' character to the standard output.

+ Details :
> ft_putchar: The function call.
> '2': The character to be written.

--------------------------------------
-> nb = 147483648;
+ Purpose :
This line sets the value of nb to 147483648 to handle the special case of the minimum value of a signed 32-bit integer.

+ Details :
> nb: The variable to be set.
> 147483648: The new value of nb.

--------------------------------------
-> if (nb < 0)
+ Purpose :
This line checks if the integer nb is less than 0.

+ Details :
> if: The conditional statement.
> nb < 0: The condition to check.
> nb: The integer to be checked.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the conditional block.

--------------------------------------
-> ft_putchar('-');
+ Purpose :
This line calls the ft_putchar function to write the '-' character to the standard output.

+ Details :
> ft_putchar: The function call.
> '-': The character to be written.

--------------------------------------
-> nb = -nb;
+ Purpose :
This line sets the value of nb to its absolute value.

+ Details :
> nb: The variable to be set.
> -nb: The absolute value of nb.

--------------------------------------
-> if (nb >= 10)
+ Purpose :
This line checks if the integer nb is greater than or equal to 10.

+ Details :
> if: The conditional statement.
> nb >= 10: The condition to check.
> nb: The integer to be checked.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the conditional block.

--------------------------------------
-> ft_putnbr(nb / 10);
+ Purpose :
This line recursively calls the ft_putnbr function with the integer division of nb by 10.

+ Details :
> ft_putnbr: The function call.
> nb / 10: The integer division of nb by 10.

--------------------------------------
-> ft_putnbr(nb % 10);
+ Purpose :
This line recursively calls the ft_putnbr function with the remainder of the division of nb by 10.

+ Details :
> ft_putnbr: The function call.
> nb % 10: The remainder of the division of nb by 10.

--------------------------------------
-> else
+ Purpose :
This line marks the else block of the if statement.

+ Details :
> else: The keyword for the else block.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the else block.

--------------------------------------
-> ft_putchar(nb + '0');
+ Purpose :
This line calls the ft_putchar function to write the character representation of the integer nb to the standard output.

+ Details :
> ft_putchar: The function call.
> nb + '0': The character representation of the integer nb.

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
-> ft_putnbr(-2147483648);
+ Purpose :
This line calls the ft_putnbr function, passing the integer -2147483648 as an argument.

+ Details :
> ft_putnbr: The function call.
> -2147483648: The integer to be displayed.

--------------------------------------
-> return 0;
+ Purpose :
This line returns 0 to indicate that the program ended successfully.

+ Details :
> return: The keyword used to return a value from the function.
> 0: The value to be returned.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_putnbr' function. ##
*/
