#include<stdio.h>
int main(){
    int choice,num1,num2;
    printf("1.Sum\n2.Difference\n3.Product\n4.Divide\n");
    scanf("%d %d %d",&choice,&num1,&num2);
    switch(choice){
        case 1:printf("%d",num1+num2);break;
        case 2:printf("%d",num1-num2);break;
        case 3:printf("%d",num1*num2);break;
        case 4:printf("%d",num1/num2);break;
        return 0;
        
    }
}