#include <stdio.h>
#include <math.h>
int main() {
    int N, original, digit, count = 0;
    int sum = 0;
    scanf("%d", &N);
    original = N;
    for(int temp = N; temp != 0; temp /= 10) {
        count++;
    }
    for(int temp = N; temp != 0; temp /= 10) {
        digit = temp % 10;
        sum += pow(digit, count);
    }
    if(sum == original)
        printf("Yes");
    else
        printf("No");

    return 0;
}