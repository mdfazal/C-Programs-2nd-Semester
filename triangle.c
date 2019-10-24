/*Write a program that reads three coordinates (x 1 , y 1 ), (x 2 , y 2 ) & (x 3 , y 3 ) as input and checks whether these numbers can be considered as the three vertices of a triangle. If the vertices can form a triangle then find the type (isosceles, equilateral or right-angled) of the triangle and the area of the triangle.*/

#include <stdio.h>
#include <math.h>
main ()
{
	int x1,x2,y1,y2,z1,z2;
	printf("\nEnter x co-ordinates :");		
	scanf("%d%d", &x1,&x2);
	printf("\nEnter y co-ordinates :");
	scanf("%d%d", &y1,&y2);
	printf("\nEnter z co-ordinates :");
	scanf("%d%d", &z1,&z2);
	float l1,l2,l3,S,area;
	l1=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	l2=sqrt(pow((y1-y2),2)+pow((z1-z2),2));
	l3=sqrt(pow((z1-z2),2)+pow((x1-x2),2));
	if((l1+l2)>l3 && (l2+l3)>l1 && (l1+l3)>l2)
	{
		if(l1==l2 && l2==l3)
		{
			printf("\nTriangle is equilateral");
		}
		else if(l1==l2 || l2==l3 || l3==l1)
		{
			printf("\nTraingle is isoceles");
		}
		else if(l3==sqrt(pow(l1,2)+pow(l2,2)) || l2==sqrt(pow(l1,2)+pow(l3,2)) || l1==sqrt(pow(l3,2)+pow(l2,2)))
		{
			printf("\nIt is a right angle triangle");
		}
		else
		{	
			printf("\nTriangle is scalene");
		}
	}
	else
	{	
		printf("\nTriangle does not exist ");
	}
	S=(l1+l2+l3)/2;
	area=sqrt(S*(S-l1)*(S*l2)*(S-l3));
	printf("\nThe area of the triangle is :%f",area);
}


	

