#include<stdio.h>
int main()
{
    int totalData,N,usage,i=0,daysUsed=0;
    scanf("%d",&totalData);
    scanf("%d",&N);
    while(i<N)
    {
        scanf("%d",&usage);

        if(totalData>=usage)
        {
            totalData=totalData-usage;
            daysUsed=daysUsed+1;
        }
        else
        {
            totalData=0;
            break;
        }
        i= i+1;
    }
    printf("Days Used: %d\n",daysUsed);
    printf("Remaining Data: %dGB",totalData);
    return 0;
}