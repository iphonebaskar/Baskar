#include<stdio.h>
int main()
{
int n,x,rem,result=0;
printf("\n enter the n value:");
scanf("%d",&n);
x=n;
while(x!=0)
{
rem=x%10;
result=result+rem*rem*rem;
x=x/10;
}
if(result==n)
{
printf("%d\n is Armstrong number:",n);
}
else
{
printf("%d\n is not Armstrong number:",n);
}
return 0;
}
