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
    int found=0;
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            for(int k=i;k<R;k++)
            {
                for(int l=0;l<C;l++)
                {
                    if(k==i && l<=j)
                    {
                        continue;
                    }
                    if(a[i][j]==a[k][l])
                    {
                        printf("%d",a[i][j]);
                        found=1;
                        break;
                    }
                }
                if(found==1)
                {
                    break;
                }
            }
            if(found==1)
            {
                break;
            }
        }
        if(found==1)
        {
            break;
        }
    }
    return 0;
}