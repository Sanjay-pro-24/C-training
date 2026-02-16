#include <stdio.h>
int main() {
    int member,amount;
    float bill;
    scanf("%d %d",&member,&amount);
    if(member==1){
        if(amount>=100){
            bill=amount-(amount*0.20);
        }
        else
            bill=amount-(amount*0.10);
    }
    else if(member==0)
        bill=amount;
    else
        printf("Invalid Member ");
    printf("%.2f",bill);

    return 0;
}