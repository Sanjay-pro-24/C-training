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
    int count=0;
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            int num=a[i][j];
            int prime=1;
            if(num<=1)
                prime=0;
            for(int k=2;k<=num/2;k++)
            {
                if(num%k==0)
                {
                    prime=0;
                    break;
                }
            }
            if(prime==1)
                count++;
        }
    }
    printf("%d",count);
    return 0;
}