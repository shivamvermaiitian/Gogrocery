// 卐☆ॐ_नमः_शिवाय ☆卐
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int32_t main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,q;
        cin>>n>>a>>q;
        int cnt=a,mx=a,ct=0;
        while(q--){
            char c;
            cin>>c;
            if(c=='+'){
                cnt++;
                //cout<<cnt<<" ";
                if(cnt>mx)mx=cnt;
                ct++;
            }else{
                cnt--;
            }
        }
        if(mx==n){
            cout<<"YES"<<endl;
        }else if(a+ct>=n){
            cout<<"MAYBE"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
}
