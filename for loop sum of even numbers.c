#include <stdio.h>
int main() {
    int n, i;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i += 2) {
        sum = sum + i;
    }
    printf("Sum of even numbers = %d\n", sum);
    return 0;
}
