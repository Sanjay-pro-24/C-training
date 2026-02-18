#include <stdio.h>
int main() {
    int N, mark;
    int total = 0, failed = 0;
    float average;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &mark);
        total += mark;
        if(mark < 40) {
            failed++;
        }
    }
    average = total / N;
    printf("Average Score: %.0f\n", average);
    printf("Failed Subjects: %d", failed);
    return 0;
}
