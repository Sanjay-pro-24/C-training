#include <stdio.h>

int main() {
   int num_withdraw,amt_withdrawed,t_amt_withdraw=0;
   scanf("%d",&num_withdraw);
   for (int i=1;i<=num_withdraw;i++){
       scanf("%d",&amt_withdrawed);
       t_amt_withdraw+=amt_withdrawed;
   }
   if(t_amt_withdraw<=10000){
       printf("Approved");
   }
    else{
        printf("Limit reached");
    }

    return 0;
}