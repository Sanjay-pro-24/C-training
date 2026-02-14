#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    for(i = 1; n > 0; i = i++) {
        printf("%d",n%10);
        n/=10;
    }
    
    return 0;
}
