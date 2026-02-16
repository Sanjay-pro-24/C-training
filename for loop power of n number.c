#include <stdio.h>

int main() 
{
    int base, exponent;
    int result = 1;

    scanf("%d", &base);
    scanf("%d", &exponent);

    for(int i = 1; i <= exponent; i++)
    {
        result = result * base;
    }

    printf("%d", result);   // printing the answer

    return 0;
}
