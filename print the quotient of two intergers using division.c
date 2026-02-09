#include<stdio.h>
int main()
{
    int a,b,quotient,remainder;
    scanf("%d%d",&a,&b);
    quotient=a/b;
    remainder=a%b;
    printf("quotient=");
    printf("%d ",quotient);
    printf("remainder=");
    printf("%d",remainder);
    return 0;
    
}