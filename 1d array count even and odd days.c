#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int day;
    int working=0,holiday=0;
    for(int i=0;i<N;i++) {
        scanf("%d",&day);
        if(day%2==0)
            working++;
        else
            holiday++;
    }
    printf("Working days: %d\n",working);
    printf("Holidays: %d\n",holiday);

    return 0;
}