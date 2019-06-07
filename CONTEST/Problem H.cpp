#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll reverseNumber(ll n){
    ll rev = 0;
    while(n>0){
        rev=rev*10+(n%10);
        n=n/10;
    }
    return rev;
}
int main(){
    ll n,level=0;
    scanf("%lld",&n);
    while(true){
        ll rev = reverseNumber(n);
        if(rev==n) break;
        else n+=rev;
        level++;
    }
    printf("%lld\n",level);
    return 0;
}
