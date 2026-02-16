#include <stdio.h>
int main() {
    int i,num,d_sum=0;
    scanf("%d",&num);
        for(i=1;i<num;i++){
            if(num%i==0)
                d_sum+=i;
        }
        if(d_sum==num){
            printf("perfect number");
        } 
        else
            printf("Not prefect number");
        

    return 0;
}