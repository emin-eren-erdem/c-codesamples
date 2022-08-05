#include <stdio.h>
#include <string.h>
int main()
{ int i,sc,wc=1;
  char sent[100];
  printf("Enter a sentence ");
  gets(sent);
  sc=strlen(sent);
 
 for(i=0;i<sc;i++)
   { if(sent[i]==' ') wc++; }
   
 printf("The number of words is %d\n",wc);   
  return 0;		
}
