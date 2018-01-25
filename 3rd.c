#include<stdio.h>
#include<conio.h>
void maiin()
{
char x;
printf(" the value is");
scanf("%d,&x");
if(x=='a'||x=='b'||x=='c'||x=='d'||x=='e')
printf("the value is vowel",x);
else
printf("%d,the value is constant",x);
getch();
}
