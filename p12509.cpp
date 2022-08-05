#include <stdio.h>
int main()
{
  	float r,area;
  	printf("This program calculates the area of a circle\n");
  	printf("Enter the radius value of circle ");
  	scanf("%f",&r);
  	area=3.14*(r*r);
  	printf("The area of given circle is %.3f\n",area);
  	return 0;
}
