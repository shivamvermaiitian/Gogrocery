// 卐☆ॐ_नमः_शिवाय ☆卐
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int N= 1e7+7;


int32_t main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=0;
        while(n){
            if(n<10){
                cnt+=n;
                break;
            }
            cnt+=9;
            n=n/10;
        }
        cout<<cnt<<endl;


    }
}
