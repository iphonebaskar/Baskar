#include<stdio.h>
int main()
{
int n=6,t=0,a=0;
for(a=2;a<n;a++)
{
if(n%a==0)
t=t+1;
break;
}
if(t==1)
printf("it is not a prime number");
else
printf("it is not a prime number");
return 0;
}
