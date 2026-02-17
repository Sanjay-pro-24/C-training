#include <stdio.h>
int main() {
    int n, i;
    int fare;
    int total = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        scanf("%d", &fare);
        total = total + fare;
    }
    printf("Total Collection: ₹%d", total);
    return 0;
}
