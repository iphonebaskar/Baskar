#include<stdio.h>
#include<conio.h>
void main ()
{
    int a,b,c;
    clrscr();
    printf("enter the number\n");
    scanf("%d %d", &a,&b,&c);
    if(a<b,c)
    printf("the larger number is %d",a);
    else
    {
        if(b<c)
        printf("the larger number os %d",b);
        else
        printf("the larger number is %d",c);
    }
    getch();
}
