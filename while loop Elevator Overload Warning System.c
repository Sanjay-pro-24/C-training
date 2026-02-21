#include<stdio.h>
int main()
{
    int maxWeight,N,weight,i=0,totalWeight=0,passengers=0,overload=0;
    scanf("%d",&maxWeight);
    scanf("%d",&N);
    while(i<N)
    {
        scanf("%d",&weight);
        if(totalWeight+weight<=maxWeight)
        {
            totalWeight=totalWeight+weight;
            passengers=passengers+1;
        }
        else
        {
            overload=1;
            break;
        }
        i=i+1;
    }
    printf("Passengers Allowed:%d\n",passengers);

    if(overload==1)
    {
        printf("Overload:Yes");
    }
    else
    {
        printf("Overload:No");
    }
    return 0;
}