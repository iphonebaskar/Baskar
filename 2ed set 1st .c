#include<stdio.h>
#include<math.h>
int main() 
{
int n=1,a,b,k;
scanf("%d %d",&a,&b);
for(k=1;k<=b;k++)
n=n*a;
printf("\n %d",n);
return 0;
}
