#include<stdio.h>
#include<math.h>
int main()
{
    int area,a;
    float h;
    scanf("%d %d",&area,&a);
    h=(-1*a+sqrt(a*a+8*area))/2;
    printf("%.2f\n",h);
    return 0;
}
