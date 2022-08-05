#include <stdio.h>
#include <string.h>
int main()
{ int n,i;
  char name[20];
  printf("Enter your name ");
  gets(name);
  n=strlen(name);
  for(i=0;i<n;i++)
      printf("%c\n",name[i]);
	
  return 0;		
}
