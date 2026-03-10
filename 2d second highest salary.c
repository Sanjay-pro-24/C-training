#include <stdio.h>
int main()
{
    int R, C;
    scanf("%d %d",&R,&C);
    int salary[R][C];
    int i,j;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&salary[i][j]);
        }
    }
    int max=-1,second=-1;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            int val=salary[i][j];
            if(val>max)
            {
                second=max;
                max=val;
            }
            else if(val>second&&val!=max)
            {
                second=val;
            }
        }
    }
    printf("%d",second);
    return 0;
}