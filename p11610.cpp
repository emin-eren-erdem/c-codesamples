#include <stdio.h>
int main()
{ int sum,i,n;
  sum=0;
  printf("Enter the n\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  	sum=sum+i;
  }
	
 printf("Result is %d\n",sum);	
	
return 0;	
}
