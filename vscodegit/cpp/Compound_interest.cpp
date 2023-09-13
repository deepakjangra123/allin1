#include<bits/stdc++.h>
using namespace std;
int tp=10;
void ci(float r , int t =1)
{
    if (t == tp+1) return;
    cout<<t<<". p-->"<<pow((1+r/100),t)<<"p"<<endl;
    return ci(r,t+1);
}
int main()
{
    float r ;
    cout<<"enter the rate"<<endl;
    cin>>r;
    // cout<<"enter the time period"<<endl;
    // cin>>tp;
    ci(r);
    return 0;
}
