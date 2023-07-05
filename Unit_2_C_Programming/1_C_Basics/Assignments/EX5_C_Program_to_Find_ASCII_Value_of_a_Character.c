/*
 * EX5_C_Program_to_Find_ASCII_Value_of_a_Character.c
 *
 *  Created on: Jul 5, 2023
 *      Author: ahmed
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
