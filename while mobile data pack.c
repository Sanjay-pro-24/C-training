#include <stdio.h>
int main(){
    int dataPackGB;
    scanf("%d",&dataPackGB);

    int N;
    scanf("%d",&N);

    int i=0;
    int usage;
    int exhaustedDay=0;
    int overusedData=0;
    while(i<N){
        scanf("%d",&usage);
        dataPackGB = dataPackGB - usage;
        if(dataPackGB <= 0 && exhaustedDay==0){
            exhaustedDay = i + 1;
            if(dataPackGB < 0){
                overusedData = -dataPackGB;
            }
            break;
        }
        i++;
    }
    if(exhaustedDay==0){
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0");
    }else{
        printf("Exhausted Day: %d\n",exhaustedDay);
        printf("Overused Data: %d",overusedData);
    }
    return 0;
}