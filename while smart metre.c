#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int i=0,power,maxUsage=0,surgeHours=0;
    while(i<N){
        scanf("%d",&power);
        if(i==0){
            maxUsage=power;
        }
        if(power>maxUsage){
            maxUsage=power;
        }
        if(power>5){
            surgeHours++;
        }
        i++;
    }
    printf("Max Usage: %d\n",maxUsage);
    printf("Surge Hours: %d",surgeHours);

    return 0;
}