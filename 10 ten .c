#include <stdio.h>
int main()
{
 long long a;
 int count=0;
 printf("enter the integers");
 scanf("%lld",&a);
 while(a!=0)
 {
    a /=10;
    ++count;
 }
 printf("the integers are %d",count);
 getch();
}
