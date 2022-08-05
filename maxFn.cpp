#include <stdio.h>

int max(int, int);

int main()
{ int a,b;
  printf("Enter two integers");
  scanf("%d %d",&a,&b);
  printf("Maximum of them is %d\n", max(a,b));
 return 0;	
}

int max(int d, int e )
{ if(d>e) return d;
  else
    return e; 
}
