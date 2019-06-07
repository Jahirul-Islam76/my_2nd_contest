#include<stdio.h>
int main(){
    int n;
    long long sum=0;
    while((scanf("%d",&n))!=EOF){
        sum+=n;
    }
    printf("%lld\n",sum);
    return 0;
}
