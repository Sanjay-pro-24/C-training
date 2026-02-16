#include <stdio.h>
int main() {
    int num, original, reverse = 0, digit;
    scanf("%d", &num);
    original = num;
    for(;num > 0;num /= 10) {
        digit=num%10;
        reverse=reverse*10+digit;
    }
    if(original == reverse)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}