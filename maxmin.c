/*Write a program to store three numbers into the variables a, b and c. Print the
values of all the variables and find the variables with maximum and minimum
numbers. Swap the values of variables with max and min values without using any
other variable. Finally, print the value of all the variables to ensure that the swap
has taken place.*/


#include <stdio.h>
main()
{
	int a,b,c;
	int max=0;
	int min=0;
	printf("Enter 3 numbers");
	scanf("%d%d%d", &a,&b,&c);
	if(a>b && a>c)
	{
		max=a;
		if(b>c)
		{
			min=c;
		}
	}
	else if(b>a && b>c)
	{
		max=b;
		if(a>c)
		{
			min=c;
		}
	}
	else if(c>a && c>b)
	{
		max=c;
		if(b>a)
		{
			min=a;
		}
	}
	printf("\nMaximum number is %d", max);
	printf("\nMinimum number is %d",min);
	max=max+min;
	min=max-min;
	max=max-min;
	printf("\nAfater swapping Maximum number is %d", max);
	printf("\nAfter swapping Minimum number is %d", min);
}

