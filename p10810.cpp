#include <stdio.h>
#include <math.h>
int main()
{ float y,g;
  printf("Pls enter the value of y \n");
  scanf("%f",&y);
  if(y>=10) {
	 g=sqrt(y*y*y+1);
     printf("Result is %.2f\n",g);   }
  else
   {
    if(y>0)
     {
	  g=y- 10;
	  printf("Result is %.2f\n",g); }
    else
     {
	  g=(y*y)/10;
	  printf("Result is %.2f\n",g);  }
  }
 return 0;	
}
