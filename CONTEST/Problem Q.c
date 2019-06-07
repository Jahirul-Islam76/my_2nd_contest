#include <stdio.h>
int main()
{
    char s[100];
    char toSearch;
    int i=0,count=0;
    gets(s);
    toSearch = getchar();
    while(s[i] != '\0')
    {
        if(s[i] == toSearch){
            count++;
        }
        i++;
    }
    printf("%d\n", count);
    return 0;
}
