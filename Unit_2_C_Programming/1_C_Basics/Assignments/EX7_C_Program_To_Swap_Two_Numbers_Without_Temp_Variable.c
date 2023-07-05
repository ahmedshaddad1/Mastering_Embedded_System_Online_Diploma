/*
 * EX7_C_Program_To_Swap_Two_Numbers_Without_Temp_Variable.c
 *
 *  Created on: Jul 5, 2023
 *      Author: ahmed
 */


#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float num1, num2;
	printf("Enter value of num1: ");
	scanf("%f",&num1);
	printf("Enter value of num2: ");
	scanf("%f",&num2);

	// for swap
	num1 = num1 - num2;
	num2 = num1 + num2;
	num1 = num2 - num1;

	/* another method by using XOR
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
	*/
	printf("After swapping, value of num1 = %.2f\n", num1);
	printf("After swapping, value of num2 = %.2f\n", num2);

	return 0;
}
