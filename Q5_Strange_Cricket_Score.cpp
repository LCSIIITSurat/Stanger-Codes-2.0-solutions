#include <bits/stdc++.h>
#define sz(v) v.size()
#define ll long long int

using namespace std;
void solve() {
	ll n;
	cin>>n;
	vector<ll>dp(n+10,0);
	vector<ll>v={1,2,3,4,6};
	dp[0]=1;
	for(int i=0;i<=n;i++){
		for(int j=0;j<sz(v);j++){
			dp[i+v[j]]+=dp[i];
		}
	}
	cout<<dp[n]<<"\n";
}
int main() {

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}
