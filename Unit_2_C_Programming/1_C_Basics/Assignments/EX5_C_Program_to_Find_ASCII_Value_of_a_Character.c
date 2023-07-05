/*
 ==============================================================================================================
 Name        : EX1_C_Program_To_Print_Sentence.c
 Author      : Ahmed Shaddad
 Created on	 : Jul 5, 2023
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX5 C Program to Find ASCII Value of a Character
 	 	 	   using Ansi-style (c99)
 ==============================================================================================================
 */


#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char character;
	printf("Enter a character: ");
	scanf("%c",&character);
	printf("ASCII value of %c = %d",character, character);
    return 0;
}
