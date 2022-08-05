#include <stdio.h>
#include <string.h>
int main()
{ int i,sc,andc=0;
  char sent[100];
  printf("Enter a sentence ");
  gets(sent);
  sc=strlen(sent);
 
 for(i=0;i<sc-5;i++)
   { if(sent[i]==' ') 
      if(sent[i+1]=='a')
        if(sent[i+2]=='n')
          if(sent[i+3]=='d')
		   if(sent[i+4]==' ')   andc++;
   }
 printf("The number of and is %d\n",andc);   
  return 0;		
}
