#include<stdio.h>
int main()
{
    int i=0,j=1,n;
    scanf("%d",&n);
    while(j!=n){
    if( n/j == n%j ){
        i++;
    }
        j++;
    }
    printf("%d\n",i);
    return 0;
}
