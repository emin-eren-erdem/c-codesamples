#include <stdio.h>
void menu();
void rect();
void circ();

int main()
{ 
 menu();
return 0;
}
void menu()
{ int choice;
  printf("AREA MENU\n");
  printf("1 - Rectangle\n");
  printf("2 - Circle\n");
  printf("3 - Exit\n");
  printf("   Your choice : \n");	
  scanf("%d",&choice);	
  switch(choice)
  {
  	case 1: rect(); break;
	case 2: circ(); break;
	case 3: break;
	default : printf("Wrong choice!\n");   		
  }
}

void rect()
{ int a,b,area;
  printf("Enter the a & b lines ");
  scanf("%d %d",&a,&b);
  area=a*b;
  printf("Area is %d \n",area);
}

void circ()
{ float r,area;
  printf("Enter the radius value ");
  scanf("%f",&r);
  area=3.14*(r*r);
  printf("Area is %.2f \n",area);
}
