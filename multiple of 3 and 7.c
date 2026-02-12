#include<stdio.h>
int main(){
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    if(num%3==0&&num%7==0){
        printf("Multiple of both 3 and 7");
    }
    else{
        printf("Not Multiple of both 3 and 7");
    }
    return 0;
}