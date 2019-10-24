/*Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20%of basic salary.Write a program to calculate his gross salary*/

#include <stdio.h>
int main()
{
	double bs,da,rent;
	double gs;
	printf("Enter the basic salary\n");
	scanf("%lf",&bs);
	da = 0.4*bs;
	rent = 0.2*bs;
	gs=(bs+da+rent); /*gross salary = sum of basic & all allowances*/
	printf("the gross salary is %f \n",gs);
}

