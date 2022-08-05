#include <stdio.h>
int main()
{ int me,fe;
  float gr;
 printf("Pls enter the midterm and final exam grades \n");
 scanf("%d %d",&me,&fe);
 if((me>=100)||(fe>=100)) 
    { printf("You entered wrong data! Be carefull..\n");
      printf("Program is terminated abnormally\n");
      return 0;
    }
 else 
   {
    gr=me*0.4+fe*0.6;
    printf("Your grade is %f \n",gr);
    printf("Program is terminated normally\n");
    return 0;
   }
}
