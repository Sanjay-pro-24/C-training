#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int i=0;
    int payment;
    int currentStreak=0;
    int maxStreak=0;
    while (i<N) {
        scanf("%d",&payment);
        if (payment==0) {
            currentStreak++;
            if (currentStreak>maxStreak) {
                maxStreak=currentStreak;
            }
        } else {
            currentStreak=0; 
        }
        i++;
    }
    printf("Longest Default Streak:%d",maxStreak);
    return 0;
}