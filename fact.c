#include<stdio.h>
int main()
{
    int a,b,c=1;
    printf("Enter a number.\n");
    scanf("%d",&a);
    b=a;
    for(;b>=1;b--)
    {
        c=c*b;
    }
    printf("%d",c);
}
