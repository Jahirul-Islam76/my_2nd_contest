#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char s[20],a,b,c=0;
    scanf("%s %c %c",s,&a,&b);
    for(i=0;i<strlen(s);i++){
        if(s[i]==a){
            s[i]=b;
        }
    }
    for(i=0;i<strlen(s);i++){
        if((s[i] =='0'&&c == 1)||s[i]!='0'){
            printf("%c",s[i]);
            c=1;
        }
    }
    if(c == 0){
        printf("0");
    }
    printf("\n");
    return 0;
}
