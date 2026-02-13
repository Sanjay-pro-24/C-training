#include <stdio.h>
int main() {
    int a, b, result;
    char op;
    scanf("%d%c%d", &a, &op, &b);
    switch(op) {
    case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        case '%':
            result = a % b;
            break;
        default:
            printf("Invalid operator");
            return 0;
    }
    printf("result=%d", result);

    return 0;
}
