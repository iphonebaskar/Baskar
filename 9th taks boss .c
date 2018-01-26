#include<stdio.h>
void main()
{
    int a[1000],a,j,n,k,sum=0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
    printf("Enter the number:");
    scanf("%d",&a[a]);
    }
    printf("Enter the number of terms to get sum:");
    scanf("%d",&j);
    for(k=0;k<j;k++)
    sum=sum+a[k];
    printf("The sum of %d numbers is:%d",j,sum);

}
