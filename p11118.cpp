#include <stdio.h>
int main()
{ 
  int sum,i,n,a;
  printf("Enter the first value\n");
  scanf("%d",&a);
  printf("Enter the second value\n");
  scanf("%d",&n);
  i=a;
  sum=0;
  while(i<=n)
  {
    sum=sum+i;
	i++;   
  }
  
    printf("Result=%d\n",sum);
	return 0;
}
