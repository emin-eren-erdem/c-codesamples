#include <stdio.h>
int main()
{
 int sno;
 char name[20];
 FILE *f;
 f=fopen("ali.txt","r");
 if(f==NULL)
  { printf("Error! File is not exists...");
    return -1;
  }
 printf("This prog lists student number and names\n");
 
 fscanf(f,"%d %s",&sno,name);
 while(!feof(f))
 {
  printf("%d  %s\n",sno,name);	
  fscanf(f,"%d %s",&sno,name);
  
 }
 fclose(f); 		
return 0;
	
}
