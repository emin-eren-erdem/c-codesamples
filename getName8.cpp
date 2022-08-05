#include <stdio.h>
#include <string.h>
int main()
{ int i=0;
  char name[20];
  printf("Enter your name ");
  gets(name);
 
  while (name[i]!='\0')
   {
      printf("%c\n",name[i]);
      i++;
   }
  return 0;		
}
