#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[100];
    int i=0,count=0;
    scanf("%s",str);
    while(str[i]!='\0')
    {
        if(isdigit(str[i]))
        {
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}