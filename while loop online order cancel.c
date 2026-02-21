#include<stdio.h>
int main()
{
    int N,status,i=0,successful=0,cancelled=0;
    scanf("%d",&N);
    while(i<N)
    {
        scanf("%d",&status);
        if(status==1)
        {
            successful=successful+1;
        }
        else if(status==0)
        {
            cancelled=cancelled+1;
        }
        i=i+1;
    }
    printf("Successful: %d\n",successful);
    printf("Cancelled: %d\n",cancelled);
    if(cancelled>successful)
    {
        printf("Status: Risk");
    }
    else
    {
        printf("Status: Safe");
    }
    return 0;

}
