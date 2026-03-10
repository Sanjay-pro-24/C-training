#include <stdio.h>
int main()
{
    int R,C;
    scanf("%d %d",&R,&C);
    int a[R][C];
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            scanf("%d",&a[i][j]);

    int maxDiff=0;
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            for(int x=0;x<R;x++)
            {
                if(x!=i)
                {
                    for(int y=0;y<C;y++)
                    {
                        int diff=a[i][j]-a[x][y];
                        if(diff<0) diff=-diff;
                        if(diff>maxDiff)
                            maxDiff=diff;
                    }
                }
            }
        }
    }
    printf("%d",maxDiff);
    return 0;
}