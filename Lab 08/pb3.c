//print triangular format
#include<stdio.h>
int main()
{
int rctr,cctr,n;
printf("Enter no. to be printed:");
scanf("%d",&n);
for(rctr=1;rctr<=4;rctr++)
{
for(cctr=1;cctr<=rctr;cctr++)
printf("%d",n);
printf("\n");
}
return 0;
}
