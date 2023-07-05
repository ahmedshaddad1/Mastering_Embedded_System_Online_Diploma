/*
 ======================================================================================================================
 Name        : EX1_C_Program_To_Print_Sentence.c
 Author      : Ahmed Shaddad
 Created on	 : Jul 5, 2023
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX4 C Program to Multiply two Floating Point
 	 	 	   Numbers using Ansi-style(c99) 
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float num1 , num2;
	printf("Enter two numbers: ");
	scanf("%f %f",&num1, &num2);
	printf("Product: %f", num1*num2);
    return 0;
}
