#include <stdio.h>
int main()
{ int n,i,x,j;
  bool prm;
  printf("This prog prints all prime numbers up to a given value\n");
  printf("Enter an integer  ");
  scanf("%d",&x);
  j=3;
  while(j<=x-1)
  {
    n=j;
       prm=true;
       i=2;
       while(i<=n-1)
       {
  	     if(n%i==0) prm=false;
  	     i++;
       }
       if(prm) printf("%d is a prime number \n",j);
    j++; 
  }
  return 0;
}
