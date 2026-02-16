#include<stdio.h>
int main(){
    int num,result=0;
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        result+=i*i;
    }
    printf("%d",result);
    return 0;
}