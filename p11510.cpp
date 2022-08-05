#include <stdio.h>
int main()
{  float n,r,dp;
   int year,later;
   printf("This program calcukates the population of a city for given years later\n");
   printf("Enter todays population ");
   scanf("%f",&n);
   printf("Enter rate of yearly growth of population ");
   scanf("%f",&r);
   
   dp=n*2;
   year=1;
   while (n<=dp)
   {
   	  n=n+(n*r);
   	  year++;
   }
		
	printf("Population will be doubled in %d years\n",year);
	
	return 0;
}
