#include <stdio.h>
int main()
{ int x[6]={12,34,56,56,34,12};
  int i,n=6;
  bool sym=true;
  for(i=0;i<n/2;i++)
    { //  printf("%d  %d\n",x[i],x[n-i-1]);
    	if(x[i]!=x[n-i-1])
    	   sym=false;
	}

  if(sym) printf ("Array is symetric\n");
  else printf ("Array is NOT symetric\n");

return 0;	
}
