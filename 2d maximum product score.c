#include <stdio.h>
int main()
{
    int R,C;
    scanf("%d %d",&R,&C);
    int a[R][C];
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    long long maxProduct=-1000000000;
    int index=-1;
    for(int i=0;i<R;i++)
    {
        long long product=1;

        for(int j=0;j<C;j++)
        {
            product=product*a[i][j];
        }
        if(product>maxProduct)
        {
            maxProduct=product;
            index=i;
        }
    }
    printf("%d",index);
    return 0;
}