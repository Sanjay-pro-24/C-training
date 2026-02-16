#include <stdio.h>
int main()
{
    int multiple,range,i,result=0;
    scanf("%d %d",&multiple,&range);
    for(i=1;i<=range;i++){
        if(i%multiple==0){
            result+=i;
        }
    }
    printf("%d",result);
    return 0;
}
