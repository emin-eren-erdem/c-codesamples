#include <stdio.h>
int main()
{ int i,j;
  printf("This program displays multiplication table\n");
  printf("      1   2   3   4   5   6   7   8   9  10\n");
  printf("     --  --  --  --  --  --  --  --  --  --\n");

  for(i=1;i<=10;i++)
  { printf("%2d-",i);
  	for(j=1;j<=10;j++)
  	{
  	 printf("%4d",i*j);	
    }
 	printf("\n");
  	
  	
  }		
return 0;	
}
