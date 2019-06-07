#include<stdio.h>
int main()
{
    int n,last1,x2,fast3,n1;
    scanf("%d",&n);
    last1=n%10;
    n1=n/10;
    x2=n1%10;
    fast3=n1/10;
    printf("%d%d%d\n",last1,x2,fast3);
    return 0;
}
