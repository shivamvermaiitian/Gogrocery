// 卐☆ॐ_नमः_शिवाय ☆卐
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
void solve(){
    int b,a;
    cin>>b>>a;
    int pr=1;
    for(int i=0;i<b;i++){
        int x;
        cin>>x;
        pr*=x;
    }
    if(2023%pr!=0)cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<2023/pr<<" ";
        for(int i=1;i<a;i++)cout<<1<<" ";
        cout<<endl;
    }
    return;
}
int32_t main()
{
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
