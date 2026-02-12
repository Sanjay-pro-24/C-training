#include <stdio.h>
int main() {
    int Age;
    printf("Enter a Age: ");
    scanf("%d",&Age);
    if(Age>=18){
        printf("Eligible to vote");
    }
    else{
        printf("Not Eligible to vote");
    }
    return 0;
}