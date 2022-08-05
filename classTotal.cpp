#include <stdio.h>
int main()
{ int cl1,cl2,cl3,cl4,total,sno,clas;
  FILE *f;
  f=fopen("school.txt","r");
  cl1=0; cl2=0; cl3=0; cl4=0; total=0;
  fscanf(f,"%d %d",&sno,&clas);
  while(!feof(f))
  { if(clas==1) cl1++;
    else if (clas==2) cl2++;
     else if (clas==3) cl3++;
       else if (clas==4) cl4++;	
   fscanf(f,"%d %d",&sno,&clas);    
  }	
  printf("Class  Amount \n");
  printf("-----  ------ \n");
  printf("  1     %d \n",cl1);
  printf("  2     %d \n",cl2);
  printf("  3     %d \n",cl3);
  printf("  4     %d \n",cl4);	
  total=cl1+cl2+cl3+cl4;
  printf("  Total %d \n",total);	
	
	
return 0;	
}
