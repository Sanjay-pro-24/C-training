#include <stdio.h>
int main() {
    int n, i;
    int revenue;
    int total = 0, targetDays = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        scanf("%d", &revenue);
        total += revenue;
        if(revenue > 50000) {
            targetDays++;
        }
    }
    printf("Total Revenue: %d\n", total);
    printf("Target Days: %d", targetDays);
    return 0;
}
