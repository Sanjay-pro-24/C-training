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
    int sum[R];
    for(int i=0;i<R;i++)
    {
        sum[i]=0;
        for(int j=0;j<C;j++)
        {
            sum[i]=sum[i]+a[i][j];
        }
    }
    int maxDiff=0;
    for(int i=0;i<R;i++)
    {
        for(int j=i+1;j<R;j++)
        {
            int diff=sum[i]-sum[j];
            if(diff<0)
            {
                diff=-diff;
            }
            if(diff>maxDiff)
            {
                maxDiff=diff;
            }
        }
    }
    printf("%d",maxDiff);
    return 0;
}