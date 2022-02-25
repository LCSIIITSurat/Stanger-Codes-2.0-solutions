    #include <bits/stdc++.h>
    #define ll long long int
    using namespace std;
     
    int main() {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
     
    	int num;
    	cin >> num;										// Reading input from STDIN
    	while(num--){
    	
    	ll n;
    	cin>>n;
    	ll nums[n];
     
     
    	for(ll i=0;i<n;i++)
    	   cin>>nums[i];
        // vector<int>dp(n);
        if(n==1) cout<<nums[0]<<"\n";
        if(n==2) cout<<max(nums[0],nums[1])<<"\n";
        vector<ll> dp(n);
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);
        for(int i=2;i<n;++i){
          dp[i] = max(dp[i-1], dp[i-2]+nums[i]);
        }
        cout<<dp[n-1]<<"\n";
        
    }
    }
