/*
 ======================================================================================================================
 Name        : EX1_C_Program_To_Print_Sentence.c
 Author      : Ahmed Shaddad
 Created on	 : Jul 5, 2023
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX3 C Program to Add Two Integers using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num1 , num2;
	printf("Enter The First Number: ");
	scanf("%d",&num1);
	printf("Enter The Second Number: ");
	scanf("%d",&num2);
	printf("Sum: %d", num1+num2);

    return 0;
}
