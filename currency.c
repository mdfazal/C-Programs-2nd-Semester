/*Consider a currency system with notes of seven denomi nations, namely, Re. 1,
Rs. 2, Rs. 5, Rs. 10, Rs. 50 and Rs. 100. If Rs. N has to be disbursed
using this currency system. Write a program to print the number of notes for
all denominations such that the total number of notes disbursed to pay Rs. N is
minimum. (Note: Do it without conditional statements)*/

#include <stdio.h>
void main()
{
	int amt,den;
	int one, two, five, ten, fifty, hundred;
	printf("Enter the amount of money ");
	scanf("%d",&amt);
	hundred = amt/100;
	amt = amt%100;
	fifty = amt/50;
	amt = amt%50;
	ten = amt/10;
	amt = amt%10;
	five = amt/5;
	amt = amt%5;
	two = amt/2;
	amt = amt%2;
	one = amt/1;
	amt = amt%1;
	printf("\n number of hundred rupee notes :%d",hundred);
	printf("\n number of fifty rupee notes :%d",fifty);  
	printf("\n number of ten rupee notes :%d",ten);
	printf("\n number of five rupee notes:%d",five);
	printf("\n number of two rupees notes:%d",two);
	printf("\n number of one rupee note:%d",one);
}
