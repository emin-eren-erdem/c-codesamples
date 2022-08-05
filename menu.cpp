#include <stdio.h>
void menu();
void rect();
void circle();

int main()
{ menu();
  return 0;
}

void menu()
{ int choice;
  printf("1 - Rectangule \n");
  printf("2 - Circle\n");
  printf("3 - Exit\n");
  printf("   Your choice : ");
  scanf("%d",&choice);
  switch(choice) {
  	case 1: rect(); break;
  	case 2: circle(); break;
  	case 3: break;
  	default : printf("Wriong choice\n");
  }	
}

void rect()
{ int a,b,area;
  printf("Enter the lines a and b ");
  scanf("%d %d",&a,&b);
  area=a*b;
  printf("Area of rectangle = %d\n",area);	
}

void circle()
{ float r,carea;
  printf("Enter the radius ");
  scanf("%f",&r);
  carea=3.14*(r*r);
  printf("Area of circle =%.2f\n",carea);	
}
