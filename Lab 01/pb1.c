//Find Area and Perimeter of Rectangle when length and breadth is entered
#include<stdio.h>
int main()
{
int l,b;
double pr,ar;
printf("Enter length of rectangle:");
scanf("%d",&l);
printf("Enter breadth of rectangle:");
scanf("%d",&b);
pr=2*(l+b);
ar=l*b;
printf("Perimeter of rectangle: %lf \n",pr);
printf("Area of rectangle: %lf \n",ar);
return 0;
}
