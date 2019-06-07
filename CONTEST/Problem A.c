#include <stdio.h>
#include<string.h>
int main()
{
    char s[250];
    int i=0,c=0;
    gets(s);
    while(s[i]!='\0'){
        if(s[i]=='+' || s[i]=='-' || s[i]=='*'){
            c++;
        }
        i++;
    }
    if (s [0]=='+' || s [0]=='-' || s [0]=='*'){
    c--;
    }
    printf("%d\n",c);
    return 0;
}

