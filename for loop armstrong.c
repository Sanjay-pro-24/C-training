#include <stdio.h>
int main() {
    int num, temp, digit;
    int sum = 0;
    scanf("%d", &num);
    temp = num;  
    for(; temp > 0; temp = temp / 10) {
        digit = temp % 10;
        sum = sum + digit * digit * digit;
    }
    if(sum == num)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}
