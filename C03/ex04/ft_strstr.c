/*
	SUBJECT :
	• Reproduce the behavior of the function strstr (man strstr).
	• Here’s how it should be prototyped :
	char	*ft_strstr(char *str, char *to_find);
*/

//____________________________________________________________________________________________________________________________________

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 21:45:17 by root              #+#    #+#             */
/*   Updated: 2024/10/06 19:42:12 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] && to_find[j] == str[i + j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/*
int main() {
  char string[] = "i feel so close to you";
  char find[] = "so";
  printf("%s\n", ft_strstr(string,find));
  return 0;
}*/

/* EXPLAINING THE CODE :

--------------------------------------
-> #include <stdio.h>
This line includes the standard input-output library (stdio.h).
This header file contains declarations for various functions
that are part of the C standard library, such as printf.

--------------------------------------
-> char *ft_strstr(char *str, char *to_find)
+ Purpose :
This line defines a function named ft_strstr.

+ Details :
> char *: The function returns a pointer to a character.
> ft_strstr: The name of the function.
> char *str: The function takes a pointer to a character array (the string to search in) as an argument.
> char *to_find: The function takes a pointer to a character array (the substring to find) as an argument.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the function body.

--------------------------------------
-> unsigned int i;
+ Purpose :
This line declares an unsigned integer variable named i.

+ Details :
> unsigned int: The type of the variable.
> i: The name of the variable.

--------------------------------------
-> unsigned int j;
+ Purpose :
This line declares an unsigned integer variable named j.

+ Details :
> unsigned int: The type of the variable.
> j: The name of the variable.

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
-> if (to_find[i] == '\0')
+ Purpose :
This line checks if the first character of the to_find string is the null character ('\0').

+ Details :
> if: The conditional statement.
> to_find[i] == '\0': The condition to check.
> to_find[i]: Accesses the character at position i in the to_find string.
> '\0': The null character that marks the end of the string.

--------------------------------------
-> return (str);
+ Purpose :
This line returns the pointer to the original string (str) if the to_find string is empty.

+ Details :
> return: The keyword used to return a value from the function.
> (str): The value to be returned.

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
-> while (str[i + j] && to_find[j] == str[i + j])
+ Purpose :
This line starts a nested while loop that continues as long as the character at position i + j in the string (str) is not the null character ('\0') and the character at position j in the to_find string matches the character at position i + j in the string.

+ Details :
> while: The loop construct.
> str[i + j]: Accesses the character at position i + j in the string.
> to_find[j] == str[i + j]: The condition for the loop to continue.
> to_find[j]: Accesses the character at position j in the to_find string.

--------------------------------------
-> {/} :
This line marks the beginning and the end of the loop body.

--------------------------------------
-> j++;
+ Purpose :
This line increments the variable j by 1.

+ Details :
> j++: Increments the value of j by 1.

--------------------------------------
-> if (to_find[j] == '\0')
+ Purpose :
This line checks if the character at position j in the to_find string is the null character ('\0').

+ Details :
> if: The conditional statement.
> to_find[j] == '\0': The condition to check.
> to_find[j]: Accesses the character at position j in the to_find string.
> '\0': The null character that marks the end of the string.

--------------------------------------
-> return (str + i);
+ Purpose :
This line returns the pointer to the position in the string (str) where the to_find string starts.

+ Details :
> return: The keyword used to return a value from the function.
> (str + i): The value to be returned.

--------------------------------------
-> i++;
+ Purpose :
This line increments the variable i by 1.

+ Details :
> i++: Increments the value of i by 1.

--------------------------------------
-> j = 0;
+ Purpose :
This line resets the variable j to 0.

+ Details :
> j = 0: Resets the value of j to 0.

--------------------------------------
-> return (0);
+ Purpose :
This line returns 0 (null pointer) if the to_find string is not found in the string.

+ Details :
> return: The keyword used to return a value from the function.
> (0): The value to be returned.

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
-> char string[] = "i feel so close to you";
+ Purpose :
This line declares a character array named string and initializes it with the string "i feel so close to you".

+ Details :
> char: The type of the array.
> string[]: The name of the array.
> "i feel so close to you": The initial value of the array.

--------------------------------------
-> char find[] = "so";
+ Purpose :
This line declares a character array named find and initializes it with the string "so".

+ Details :
> char: The type of the array.
> find[]: The name of the array.
> "so": The initial value of the array.

--------------------------------------
-> printf("%s\n", ft_strstr(string,find));
+ Purpose :
This line calls the ft_strstr function, passing the arrays string and find as arguments, and prints the result to the standard output.

+ Details :
> printf: The function used to print formatted output.
> "%s\n": The format string for a string followed by a newline.
> ft_strstr(string,find): The function call with the arrays string and find as arguments.

--------------------------------------
-> return 0;
+ Purpose :
This line returns 0 to indicate that the program ended successfully.

+ Details :
> return: The keyword used to return a value from the function.
> 0: The value to be returned.

//____________________________________________________________________________________________________________________________________

 ## There are several ways to manipulate the 'ft_strstr' function. ##
*/
