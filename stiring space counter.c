#include <stdio.h>
int main()
{
    char str[200];
    int i,count=0;
    scanf("%[^\n]",str);
    for(i=0;str[i] !='\0';i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}