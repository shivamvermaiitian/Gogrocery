// 卐☆ॐ_नमः_शिवाय ☆卐
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
void solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    for(int i=1;i<n;i++){
        if((str[i]=='1'&&str[i-1]=='1'))continue;
        else{
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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
