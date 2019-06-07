#include<stdio.h>
int main(){
    long int n;
    scanf("%ld",&n);
    int z;
    while(n!=0){
    z=n%10;
    n=n/10;
    }
    if(z<0)
    z=z*(-1);
    printf("%d\n",z);
    return 0;
}
