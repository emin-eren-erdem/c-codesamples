#include <stdio.h>
int main()
{ int x[500];
  int max,i,n,max2;
  bool sym=true;
 printf("This prg tests symetery of an array with up to 500 elements\n");

 printf("Enter the size of array ");
 scanf("%d",&n); 
 for(i=0;i<n;i++)
   { printf("Enter the %d. element ",i+1); 
     scanf("%d",&x[i]); }	 
   
 for(i=0;i<n;i++)
   {  printf("%4d",x[i]); }	
 printf("\n");  
 
 
 for(i=0;i<n/2;i++)
 {  printf("%d %d\n",x[i],x[n-i-1]);
 	if(x[i]!=x[n-i-1]) sym=false;
 	
 }


 if(sym) 
   printf("The array is sysmetric\n");
 else
   printf("The array is NOT sysmetric\n");		
return 0;	
}
