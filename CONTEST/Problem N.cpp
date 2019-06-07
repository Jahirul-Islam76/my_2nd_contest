#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cell,rabbit,result=0;
    cin>>cell>>rabbit;
    result=ceil(float(rabbit)/(cell));
    cout<<result<<endl;
    return 0;
}
