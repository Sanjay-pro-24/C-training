#include <stdio.h>
int main(){
    int ATMcash;
    scanf("%d",&ATMcash);
    int N;
    scanf("%d",&N);
    int i=0;
    int withdraw;
    int successfulWithdrawals=0;
    while(i<N){
        scanf("%d",&withdraw);
        if(ATMcash - withdraw >= 0){
            ATMcash = ATMcash - withdraw;
            successfulWithdrawals++;
        }else{
            break;
        }
        i++;
    }
    printf("Successful Withdrawals: %d\n",successfulWithdrawals);
    printf("Remaining Cash: %d",ATMcash);
    return 0;
}