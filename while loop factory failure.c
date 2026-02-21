#include<stdio.h>
int main()
{
    int N,status,i=0,current=0,longest=0;
    scanf("%d",&N);
    while(i<N)
    {
        scanf("%d",&status);

        if(status==0)
        {
            current=current+1;

            if(current>longest)
            {
                longest=current;
            }
        }
        else if(status==1)
        {
            current=0;
        }
        i=i+1;
    }
    printf("Longest Failure Streak: %d",longest);
    return 0;
}