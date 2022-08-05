#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
int main()
{
   int num;
   srand(time(NULL));    
   num = rand()%100; 

   printf("%d\n",num);  
   if(num%2==0) 
       printf("%d is even value\n",num);
   else
       printf("%d is odd value\n",num);   
   
   return 0;
}
