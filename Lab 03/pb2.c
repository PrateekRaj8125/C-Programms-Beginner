//Enter a no. and find the entered no. is even or odd using ternary operator
#include<stdio.h>
int main()
{
int n;
printf("Enter a no.:");
scanf("%d",&n);
(n%2==0)?printf("No. %d is even \n",n):printf("No. %d is odd \n",n);
return 0;
}
