#include <stdio.h>

int main()
{
    char str[200];
    int i;

    scanf("%[^\n]", str);   // read string with spaces

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;   // convert to uppercase using ASCII
        }
    }

    printf("%s", str);

    return 0;
}