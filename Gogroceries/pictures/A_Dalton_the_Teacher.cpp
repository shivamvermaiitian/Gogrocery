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
        int a[n];
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==i+1)cnt++;
        }
        cout<<(cnt+1)/2<<endl;


    }
}
