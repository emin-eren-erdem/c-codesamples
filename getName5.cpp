#include <stdio.h>
#include <string.h>
int main()
{ int ccount;
  char name[20], sname[20];
  printf("Enter your name ");
  gets(name);
   printf("Enter your surname ");
  gets(sname);
  strcat(name,sname);
  printf("Your name is %s",name);
	
  return 0;		
}
