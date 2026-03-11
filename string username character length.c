#include <stdio.h>
int main()
{
    char username[100];
    int count=0,i=0;
    scanf("%s",username);
    while(username[i]!='\0')
    {
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}