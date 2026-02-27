#include <stdio.h>
int main() {
    int fuel,N;
    scanf("%d%d",&fuel,&N);
    int i=0;
    int consumption;
    int completedTrips=0;
    while(i<N){
        scanf("%d",&consumption);
    if(fuel>=consumption){
        fuel-=consumption;
        completedTrips++;
    }
    else{
        break;
    }
    i++;
    }
    printf("completed Trips:%d\n",completedTrips);
    printf("Remaning fuels:%d\n",fuel);
    return 0;
}
    
