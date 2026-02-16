#include <stdio.h>

int main() {
    int num, temp;
    int decimal = 0;
    int base = 1;   

    scanf("%d", &num);

    for(;num>0;num/=10) {
        temp = num % 10;

        decimal += temp * base;
        base *= 2;
    }

    printf("%d", decimal);

    return 0;
}