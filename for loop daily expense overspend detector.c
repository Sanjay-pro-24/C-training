#include<stdio.h>
int main(){
    int num_days,e_day,oe_days=0,t_expence=0;
    scanf("%d",&num_days);
    for(int i=1;i<=num_days;i++){
        scanf("%d",&e_day);
        t_expence+=e_day;
        if(e_day>1000){
            oe_days+=1;
        }
        e_day=0;
    }
    printf("Total expence : %d \nOver expence days: %d",t_expence,oe_days);
    return 0;
}