/*
	SUBJECT :
	• Create a function that capitalizes the first letter of each word and transforms all other letters to lowercase.
	• A word is a string of alphanumeric characters.
	• Here’s how it should be prototyped :
	char *ft_strcapitalize(char *str);
	• It should return str.
	• For example:
	"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"
	• Becomes
	"Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un"
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:27:41 by root              #+#    #+#             */
/*   Updated: 2024/10/06 19:19:22 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*lowalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	lowalpha(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			{
				if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
				{
					if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
					{
						str[i] -= 32;
					}
				}
			}
		}
		i++;
	}
	return (str);
}
/*
int main ()
{
	char str2[] = "smnfweAQOD dnOWQJdwnd    ,PWala,wDWW";

	ft_strcapitalize(str2);

	printf("%s" , str2);
}
*/

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <stdio.h>
This line includes the standard input-output library (stdio.h).
This header file contains declarations for various functions
that are part of the C standard library, such as printf.

--------------------------------------
-> char *lowalpha(char *str)
+ Purpose :
This line defines a helper function named lowalpha that converts all uppercase letters in the string to lowercase.

+ Details :
> char *: The function returns a pointer to a character.
> lowalpha: The name of the function.
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
-> i = 0;
+ Purpose :
This line initializes the variable i to 0.

+ Details :
> i: The variable to be initialized.
> 0: The initial value.

--------------------------------------
-> while (str[i] != '\0')
+ Purpose :
This line starts a while loop that continues as long as the character at position i in the string (str) is not the null character ('\0').

+ Details :
> while: The loop construct.
> str[i] != '\0': The condition for the loop to continue.
> str[i]: Accesses the character at position i in the string.
> '\0': The null character that marks the end of the string.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> if (str[i] >= 'A' && str[i] <= 'Z')
+ Purpose :
This line checks if the character at position i in the string (str) is an uppercase letter.

+ Details :
> if: The conditional construct.
> str[i] >= 'A': Checks if the character is greater than or equal to 'A'.
> str[i] <= 'Z': Checks if the character is less than or equal to 'Z'.
> &&: Logical AND operator.

--------------------------------------
-> str[i] += 32;
+ Purpose :
This line converts the uppercase letter at position i in the string (str) to its corresponding lowercase letter.

+ Details :
> str[i]: The character at position i in the string.
> += 32: Adds 32 to the ASCII value of the character to convert it to lowercase.

--------------------------------------
-> i++;
+ Purpose :
This line increments the variable i by 1.

+ Details :
> i++: Increments the value of i by 1.

--------------------------------------
-> return (str);
+ Purpose :
This line returns the pointer to the modified string (str).

+ Details :
> return: The keyword used to return a value from the function.
> (str): The value to be returned.

--------------------------------------
-> char *ft_strcapitalize(char *str)
+ Purpose :
This line defines the main function named ft_strcapitalize that capitalizes the first letter of each word and transforms all other letters to lowercase.

+ Details :
> char *: The function returns a pointer to a character.
> ft_strcapitalize: The name of the function.
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
-> i = 0;
+ Purpose :
This line initializes the variable i to 0.

+ Details :
> i: The variable to be initialized.
> 0: The initial value.

--------------------------------------
-> lowalpha(str);
+ Purpose :
This line calls the helper function lowalpha to convert all uppercase letters in the string to lowercase.

+ Details :
> lowalpha: The name of the helper function.
> str: The string to be modified.

--------------------------------------
-> while (str[i] != '\0')
+ Purpose :
This line starts a while loop that continues as long as the character at position i in the string (str) is not the null character ('\0').

+ Details :
> while: The loop construct.
> str[i] != '\0': The condition for the loop to continue.
> str[i]: Accesses the character at position i in the string.
> '\0': The null character that marks the end of the string.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> if (str[i] >= 'a' && str[i] <= 'z')
+ Purpose :
This line checks if the character at position i in the string (str) is a lowercase letter.

+ Details :
> if: The conditional construct.
> str[i] >= 'a': Checks if the character is greater than or equal to 'a'.
> str[i] <= 'z': Checks if the character is less than or equal to 'z'.
> &&: Logical AND operator.

--------------------------------------
-> if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
+ Purpose :
This line checks if the previous character is not a lowercase letter.

+ Details :
> if: The conditional construct.
> !(str[i - 1] >= 'a' && str[i - 1] <= 'z'): Checks if the previous character is not a lowercase letter.
> !: Logical NOT operator.
> str[i - 1]: Accesses the character at position i-1 in the string.

--------------------------------------
-> if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
+ Purpose :
This line checks if the previous character is not an uppercase letter.

+ Details :
> if: The conditional construct.
> !(str[i - 1] >= 'A' && str[i - 1] <= 'Z'): Checks if the previous character is not an uppercase letter.
> !: Logical NOT operator.
> str[i - 1]: Accesses the character at position i-1 in the string.

--------------------------------------
-> if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
+ Purpose :
This line checks if the previous character is not a digit.

+ Details :
> if: The conditional construct.
> !(str[i - 1] >= '0' && str[i - 1] <= '9'): Checks if the previous character is not a digit.
> !: Logical NOT operator.
> str[i - 1]: Accesses the character at position i-1 in the string.

--------------------------------------
-> str[i] -= 32;
+ Purpose :
This line converts the lowercase letter at position i in the string (str) to its corresponding uppercase letter.

+ Details :
> str[i]: The character at position i in the string.
> -= 32: Subtracts 32 from the ASCII value of the character to convert it to uppercase.

--------------------------------------
-> i++;
+ Purpose :
This line increments the variable i by 1.

+ Details :
> i++: Increments the value of i by 1.

--------------------------------------
-> return (str);
+ Purpose :
This line returns the pointer to the modified string (str).

+ Details :
> return: The keyword used to return a value from the function.
> (str): The value to be returned.

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
-> char str2 [] = "smnfweAQOD dnOWQJdwnd    ,PWala,wDWW";
+ Purpose :
This line declares a character array named str2 and initializes it with the string "smnfweAQOD dnOWQJdwnd    ,PWala,wDWW".

+ Details :
> char: The type of the array.
> str2[]: The name of the array.
> "smnfweAQOD dnOWQJdwnd    ,PWala,wDWW": The initial value of the array.

--------------------------------------
-> ft_strcapitalize(str2);
+ Purpose :
This line calls the ft_strcapitalize function, passing the array str2 as an argument.

+ Details :
> ft_strcapitalize: The name of the function.
> str2: The array to be modified.

--------------------------------------
-> printf("%s" , str2);
+ Purpose :
This line prints the modified string to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "%s": The format string for the string.
> str2: The modified string to be printed.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_strcapitalize' function. ##
*/