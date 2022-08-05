#include <stdio.h>
int main()
{ int x[7];
  int i,sum=0;
  for(i=0;i<7;i++)
   { printf("Enter the %d. element of array",i+1);
     scanf("%d",&x[i]);
   }
   for(i=0;i<7;i++)
   { printf("%4d",x[i]); }
   
   for(i=0;i<7;i++)
   { sum=sum+x[i]; }
   printf("The sum of array is %d\n",sum);
   		
return 0;	
}
