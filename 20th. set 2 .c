#include<stdio.h>
int main()
{
        longint sum=0,x,n;
        clrscr();
        printf("\n Please Give The Value of N:  ");
        scanf("%ld",&n);
        for(x=1;x<=n;x++)
        {
            printf("\n 5 * %ld = %ld",x,5*x);
        }
        
        return(0);
