#include <stdio.h>
int main(void) {
int i,j,k,orino,x,result;
scanf("%d %d",&i,&j);
for(k=i;k<=j;k++)
{
orino=k;
result=0;
while(orino!=0)
{
	x=orino%10;
	result=result+x*x*x;
orino=orino/10;
	}
if(k==result)
printf("%d",result);
}
	return 0;
}
