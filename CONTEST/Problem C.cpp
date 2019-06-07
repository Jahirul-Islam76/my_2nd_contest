#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d,r1,r2;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d>0){
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        if(r1<r2){
        cout<<"Two roots: "<<r1<<" "<<r2<<endl;
        }
        else{
        cout<<"Two roots: "<<r2<<" "<<r1<<endl;
        }
    }
    else if(d==0){
        r1=-b/(2*a);
        cout<<"One root: "<<r1<<endl;
    }
    else{
        cout<<"No roots"<<endl;
     }
    return 0;
}
