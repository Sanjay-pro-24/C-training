#include <stdio.h>
int main() {
    int N,balance,transaction,i=0,lowBalanceDays=0;
    scanf("%d",&N);
    scanf("%d",&balance);
    while(i<N){
        scanf("%d",&transaction);
        balance=balance+transaction;
        if(balance<2000){
            lowBalanceDays++;
        }
        i++;
    }
    printf("Final Balance: %d\n", balance);
    printf("Low Balance Days: %d", lowBalanceDays);
    return 0;
}