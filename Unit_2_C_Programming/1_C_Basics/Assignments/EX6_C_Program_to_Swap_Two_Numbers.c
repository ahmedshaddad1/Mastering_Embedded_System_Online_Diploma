/*
 * EX6_C_Program_to_Swap_Two_Numbers.c
 *
 *  Created on: Jul 5, 2023
 *      Author: ahmed
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float num1, num2, temp;

	printf("Enter value of num1: ");
	scanf("%f",&num1);
	printf("Enter value of num2: ");
	scanf("%f",&num2);

	// for swap
	temp = num1;
	num1 = num2;
	num2 = temp;

	printf("After swapping, value of num1 = %.2f\n", num1);
	printf("After swapping, value of num2 = %.2f\n", num2);

	return 0;
}
