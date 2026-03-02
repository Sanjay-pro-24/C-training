#include <stdio.h>
int main(){
    int n=5;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i){
            printf(" ");
            j++;
        }
        int k=1;
        while(k<=i){
            printf("* ");
            k++;
        }
        printf("\n");
        i++;
    }
    i=n-1;
    while(i>=1){
        int j=1;
        while(j<=n-i){
            printf(" ");
            j++;
        }
        int k=1;
        while(k<=i){
            printf("* ");
            k++;
        }
        printf("\n");
        i--;
    }
    return 0;
}