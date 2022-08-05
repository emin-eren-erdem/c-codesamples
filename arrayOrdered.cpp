#include <stdio.h>
int main()
{ int x[100];
  int i,n;
  bool ord=true;
  printf("What is the size of array ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
   { printf("Enter the %d. element of array",i+1);
     scanf("%d",&x[i]); }
     
   for(i=0;i<n;i++)
   { printf("%4d",x[i]); }
   printf("\n"); 
   
   for(i=1;i<n;i++)
   { if(x[i+1]<x[i]) ord=false;  }
   
   if (ord) printf("Array is in order\n");
   else 
    printf("Array is NOT in order\n"); 
   		
return 0;	
}
