#include<stdio.h>
int main()
{
    char x;
    printf("Enter a character: ");
    scanf("%x",&x);

    if( (x>='x' && x<='z') || (x>='X' && x<='Z'))
        printf("%c is an alphabet.",x);
    else
        printf("%c is not an alphabet.",x);

    return 0;
}
