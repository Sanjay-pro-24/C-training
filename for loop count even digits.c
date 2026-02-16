#include <stdio.h>
int main()
{
    int num,digits=0,i,temp;
    scanf("%d",&num);
    for(i=1;num>0;i++){
        temp=num%10;
        if(temp%2==0){
            digits+=1;
            
        }
        num/=10;}
        printf("%d",digits);
        return 0;
    }