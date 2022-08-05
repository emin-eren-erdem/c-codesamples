#include <stdio.h>
#include <string.h>
int main()
{ int ccount;
  char name[20];
  printf("Enter your name ");
  gets(name);
  printf("Hello %s. How are you?\n",name);
  printf("You have %d characters in your name\n",strlen(name));
  strupr(name);
  printf("Your name is %s",name);
	
  return 0;		
}
