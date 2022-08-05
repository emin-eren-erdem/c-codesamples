#include <stdio.h>
int main()
{ int x[6]={25,17,9,36,48,24};
  int sum,i;
 printf("This prg calculates the sum of an array with 6 elements");
// for(i=0;i<6;i++)
//   { printf("Enter the %d. value ",i);
//     scanf("%d",&x[i]); }
 for(i=0;i<6;i++)
   {  printf("%4d",x[i]); }	
 printf("\n");  
 sum=0;
 for(i=0;i<6;i++)
 { sum=sum+x[i];  }

 printf("Sum of the array is %d\n",sum);
 		
return 0;	
}
