#include<stdio.h>

int main()
{
    int n,x1,x2,x3,x4,n1,n2,n3,n4,pro=1;
    scanf("%d",&n);
    x1=n %10;
    n1=n/ 10;
    x2=n1 %10;
    n2=n1/ 10;
    x3=n2 %10;
    n3=n2/ 10;
    x4=n3 %10;
    n4=n3/ 10;
    pro=x1*x3*n4;
    if(pro<0){
    pro=pro*(-1);
    }
    printf("%d\n",pro);
    return 0;
}
