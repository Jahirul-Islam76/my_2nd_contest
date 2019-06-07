#include<stdio.h>
int main()
{
    int n,fast,last;
    scanf("%d",&n);
    fast=n/100;
    last=n%10;
    if(fast==last){
    printf("=\n");
    }
    else if(fast>last){
    printf("%d\n",fast);
    }
    else{
        printf("%d\n",last);
    }
    return 0;
}
