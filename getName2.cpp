#include <stdio.h>
#include <string.h>
int main()
{ 
  char name[20];
  printf("Enter your name ");
  gets(name);
  printf("Hello %s. How are you?\n",name);
	
  return 0;		
}
