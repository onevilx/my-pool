/*
	SUBJECT :
	• Write a function that converts the initial portion of the string pointed by str to its int representation.
	• The string can start with an arbitrary amount of white space (as determined by isspace(3)).
	• The string can be followed by an arbitrary amount of + and - signs, - sign will change
	the sign of the int returned based on the number of - is odd or even.
	• Finally the string can be followed by any numbers of the base 10.
	• Your function should read the string until the string stops following the rules and return
	the number found until now.
	• You should not take care of overflow or underflow. result can be undefined in that case.
	• Here’s an example of a program that prints the atoi return value:
	$>./a.out " ---+--+1234ab567"
	$> -1234
	• Here’s how it should be prototyped :
	int ft_atoi(char *str);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 19:05:09 by root              #+#    #+#             */
/*   Updated: 2024/10/06 20:02:05 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * sign);
}
/*
int	main()
{
	char s2[] = " ---+--+1234ab567";
	int res = ft_atoi(s2);
	printf("%d",res);
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <stdio.h>
This line includes the standard input-output library (stdio.h).
This header file contains declarations for various functions
that are part of the C standard library, such as printf.

--------------------------------------
-> int ft_atoi(char *str)
+ Purpose :
This line defines a function named ft_atoi.

+ Details :
> int: The function returns an integer.
> ft_atoi: The name of the function.
> char *str: The function takes a pointer to a character array (string) as an argument.

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
-> int res;
+ Purpose :
This line declares an integer variable named res.

+ Details :
> int: The type of the variable.
> res: The name of the variable.

--------------------------------------
-> int sign;
+ Purpose :
This line declares an integer variable named sign.

+ Details :
> int: The type of the variable.
> sign: The name of the variable.

--------------------------------------
-> i = 0;
+ Purpose :
This line initializes the variable i to 0.

+ Details :
> i: The variable to be initialized.
> 0: The initial value.

--------------------------------------
-> res = 0;
+ Purpose :
This line initializes the variable res to 0.

+ Details :
> res: The variable to be initialized.
> 0: The initial value.

--------------------------------------
-> sign = 1;
+ Purpose :
This line initializes the variable sign to 1.

+ Details :
> sign: The variable to be initialized.
> 1: The initial value.

--------------------------------------
-> while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
+ Purpose :
This line starts a while loop that continues as long as the character at position i in the string (str) is a whitespace character.

+ Details :
> while: The loop construct.
> str[i] == 32: Checks if the character is a space (' ').
> str[i] >= 9 && str[i] <= 13: Checks if the character is a tab, newline, vertical tab, form feed, or carriage return.
> str[i]: Accesses the character at position i in the string.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> i++;
+ Purpose :
This line increments the variable i by 1.

+ Details :
> i++: Increments the value of i by 1.

--------------------------------------
-> while (str[i] == '-' || str[i] == '+')
+ Purpose :
This line starts a while loop that continues as long as the character at position i in the string (str) is a '-' or '+'.

+ Details :
> while: The loop construct.
> str[i] == '-': Checks if the character is a '-'.
> str[i] == '+': Checks if the character is a '+'.
> str[i]: Accesses the character at position i in the string.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> if (str[i] == '-')
+ Purpose :
This line checks if the character at position i in the string (str) is a '-'.

+ Details :
> if: The conditional statement.
> str[i] == '-': The condition to check.
> str[i]: Accesses the character at position i in the string.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the conditional block.

--------------------------------------
-> sign *= -1;
+ Purpose :
This line toggles the sign variable between 1 and -1.

+ Details :
> sign *= -1: Multiplies the sign variable by -1.

--------------------------------------
-> i++;
+ Purpose :
This line increments the variable i by 1.

+ Details :
> i++: Increments the value of i by 1.

--------------------------------------
-> while (str[i] >= '0' && str[i] <= '9')
+ Purpose :
This line starts a while loop that continues as long as the character at position i in the string (str) is a digit (0-9).

+ Details :
> while: The loop construct.
> str[i] >= '0': Checks if the character is greater than or equal to '0'.
> str[i] <= '9': Checks if the character is less than or equal to '9'.
> str[i]: Accesses the character at position i in the string.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> res = res * 10 + (str[i] - 48);
+ Purpose :
This line converts the character at position i in the string (str) to its integer representation and adds it to the result.

+ Details :
> res = res * 10: Shifts the current result to the left by one digit.
> (str[i] - 48): Converts the character to its integer representation.
> res: The variable to store the result.

--------------------------------------
-> i++;
+ Purpose :
This line increments the variable i by 1.

+ Details :
> i++: Increments the value of i by 1.

--------------------------------------
-> return (res * sign);
+ Purpose :
This line returns the final integer result, taking into account the sign.

+ Details :
> return: The keyword used to return a value from the function.
> (res * sign): The value to be returned.

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
-> char s2[] = " ---+--+1234ab567";
+ Purpose :
This line declares a character array named s2 and initializes it with the string " ---+--+1234ab567".

+ Details :
> char: The type of the array.
> s2[]: The name of the array.
> " ---+--+1234ab567": The initial value of the array.

--------------------------------------
-> int res = ft_atoi(s2);
+ Purpose :
This line calls the ft_atoi function, passing the array s2 as an argument, and stores the result in the variable res.

+ Details :
> int res: The variable to store the result.
> ft_atoi(s2): The function call with the array s2 as an argument.

--------------------------------------
-> printf("%d",res);
+ Purpose :
This line prints the integer result stored in the variable res to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "%d": The format string for an integer.
> res: The variable to be printed.

--------------------------------------
-> return 0;
+ Purpose :
This line returns 0 to indicate that the program ended successfully.

+ Details :
> return: The keyword used to return a value from the function.
> 0: The value to be returned.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_atoi' function. ##
*/
