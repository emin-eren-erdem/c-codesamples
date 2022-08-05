#include <stdio.h>
int main()
{   int select;
    float a,b,r,h,area;
	printf("MENU OF AREA\n");
	printf("1 - RECTANGLE\n");
	printf("2 - CIRCLE\n");
	printf("3 - TRIANGLE\n");
	printf("4 - EXIT\n");
	printf("    Your Choice : ");
	scanf("%d",&select);
	switch(select)
	{ case 1: printf("Enter the a and b ");
			  scanf("%f %f",&a,&b);
			  area=a*b;
			  printf("Calculated area is %.2f",area);
			  break;
	  case 2: printf("Enter the r ");
			  scanf("%f",&r);
			  area=3.14*(r*r);
			  printf("Calculated area is %.2f",area);
			  break;	
	  case 3: printf("Enter the a and h ");
			  scanf("%f %f",&a,&h);
			  area=(a*h)/2;
			  printf("Calculated area is %.2f",area);
			  break;
	  case 4: return 0; break;
	  default : printf("You entered a wrog choice value\n");	
	}
	return 0;
}
