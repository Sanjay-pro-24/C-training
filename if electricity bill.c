#include <stdio.h>
int main() {
    int units;
    float bill;
    printf("Enter units consumed: ");
    scanf("%d", &units);
    bill = units * 5;   
    printf("Total Bill = Rs %.2f", bill);
    return 0;
}
