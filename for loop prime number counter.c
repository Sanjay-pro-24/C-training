#include <stdio.h>
int main() {
    int i,num,count=0,result=0;
    scanf("%d",&num);
    for (i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0)
                count+=1;
        }
        if(count==2){
            result+=1;
        } 
        count=0;
        }
        printf("%d",result);

    return 0;
}