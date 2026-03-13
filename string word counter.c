#include <stdio.h>
int main() {
    char str[200];
    int i=0,words=1;
    scanf("%[^\n]",str);
    if(str[0]=='\0') {
        words = 0;
    }else{
        while(str[i]!='\0') {
            if(str[i]==' ')
                words++;
            i++;
        }
    }
    printf("%d",words);
    return 0;
}