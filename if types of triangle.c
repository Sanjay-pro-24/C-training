#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c){
        printf("eqilateral triangle");
    }
    else if(a==90||b==90||c==90){
        printf("right angle triangle");
    }
    else{
        printf("scalene triangle");
    }
    return 0;
}
    