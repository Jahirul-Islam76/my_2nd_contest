#include<bits/stdc++.h>
using namespace std;
int main()
{
    int H1,H2,M1,M2,S1,S2;
    int START,END,TIME,H,M,S;
    cin>>H1>>M1>>S1>>H2>>M2>>S2;
    START=H1*3600+M1*60+S1;
    END  =H2*3600+M2*60+S2;
    TIME=END-START;
    H=TIME/3600;
    TIME=TIME%3600;
    M=TIME/60;
    S=TIME%60;
    cout<<H<<" "<<M<<" "<<S<<endl;
    return 0;
}
