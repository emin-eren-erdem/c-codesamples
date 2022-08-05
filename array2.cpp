#include <stdio.h>
int main()
{ int x[100];
  int i,sum=0,n;
  printf("What is the size of array ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
   { printf("Enter the %d. element of array",i+1);
     scanf("%d",&x[i]);
   }
   for(i=0;i<n;i++)
   { printf("%4d",x[i]); }
   printf("\n"); 
   
   for(i=0;i<n;i++)
   { sum=sum+x[i]; }
   printf("The sum of array is %d\n",sum);
   		
return 0;	
}
