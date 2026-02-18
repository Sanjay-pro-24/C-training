#include <stdio.h>

int main() {
    int n, i;
    int price, highest = 0, highDays = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        scanf("%d", &price);

        if(price > highest) {
            highest = price;
        }

        if(price > 100) {
            highDays++;
        }
    }

    printf("Highest Price: %d\n", highest);
    printf("High Price Days: %d", highDays);

    return 0;
}
