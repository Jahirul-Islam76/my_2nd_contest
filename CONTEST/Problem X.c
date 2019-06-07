#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,x1,x2,x3,n,pro,sum,result;
    cin>>n;
    if(n>=0){
    x1=n%10;
    x=n/10;
    x2=x%10;
    x3=x/10;
    pro=x3*x2*x1;
    sum=x1+x2+x3;
    }
    else{
    n=n*-1;
    x1=n%10;
    x=n/10;
    x2=x%10;
    x3=x/10;
    pro=x3*x2*x1;
    sum=x1+x2+x3;
    }
    result=pro-sum;
    cout<<result<<endl;
    return 0;
}
