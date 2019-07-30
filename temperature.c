/*Write a program to input temperatures in Celsius and Fahrenheit scale and convert the Temperatures to other scale.Display the results.*/

#include<stdio.h>
int main()
{
	float celsius, fahrenheit,output_fah,output_cel;
	printf("Enter the Temperature in celsius \n");
	scanf("%f",&celsius);//taking temperature in celsius
	printf("Enter the Temperature in Fahrenheit \n");
	scanf("%f",&fahrenheit);//taking temperature in fahrenheit
	output_cel=((1.8*celsius)+32);//output of celsius temperature in fahrenheit scale
	printf("Temperature of celsius in fahrenheit scale is %f \n",output_cel);
	output_fah=((fahrenheit-32)*5)/9.0;//output of fahrenheit temperature in celsius scale
	printf("Temperature of fahrenheit in celsius scale is %f \n",output_fah);
}
	
	
