/***********************************************************
 * Name of program: Strings
 * Authors: Jasmin Husidic
 * Description: Takes in as input a string, and outputs the number of vowels, consonants, and words until prompted to quit.
 **********************************************************/

/* These are the included libraries.  You may need to add more. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
	
int main()
{
	char string[80];

	int vowels, consonant, words;
	vowels = 0;
	consonant = 0;
	words = 0;

	printf("Please enter a string:\n");
	fgets(string, sizeof(string), stdin);


	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == 'a' || string[i] == 'A' || string[i] == 'o' || string[i] == 'O' || string[i] == 'i' || string[i] == 'I' || string[i] == 'e' || string[i] == 'E' || string[i] == 'u' || string[i] == 'U') 
		{ 
			vowels++; 
		}
		else if (string[i] >= 'a' && string[i] <= 'z' || (string[i] >= 'A' && string[i] <= 'Z'))
		{
			consonant++;
		}
		else if (string[i] == ' ' && string[i+1] != ' ')
		{
			words++;
		}
	}


	printf("You entered: %s\n", string);
	printf("The number of vowels: %d\n", vowels);
	printf("The number of consonants: %d\n", consonant);
	printf("The number of words: %d\n", words + 1);
	return 0;

     
}



