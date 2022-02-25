#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve() {
    ll n;
    cin>>n;
    ll l=0,h=sqrt(2ll*(n-1))+1;
    while(l<h){
       ll mid=(l+h)/2;
       if(mid*(mid+1)>=2ll*(n-1)){
          h=mid;
       }
       else{
          l=mid+1;
       }
     }
     cout<<h<<endl;
}
int main() {
    int t = 1;
    cin>>t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}
