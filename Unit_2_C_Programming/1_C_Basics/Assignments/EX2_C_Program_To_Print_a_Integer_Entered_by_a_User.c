/*
 =======================================================================================================================================
 Name        : EX1_C_Program_To_Print_Sentence.c
 Author      : Ahmed Shaddad
 Created on	 : Jul 5, 2023
 Description : Unit 2 C-programming >> Assignment 1 C-Basic >> EX2 C Program To Print a Integer Entered by a User using Ansi-style (c99)
 =======================================================================================================================================
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

    int integer;
	printf("Enter a integer: ");
    scanf("%d",&integer);
    printf("You entered: %d",integer);
    return 0;
}
