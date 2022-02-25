    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main() {
    	int num;
    	cin >> num;										// Reading input from STDIN
     
        while(num--){
            int m;
            cin>>m;
     
            int a[m];
            for(int i=0;i<m;i++)
                 cin>>a[i];
            long long int s=a[0];
            for(int i=1;i<m;i++)
               s+=abs(a[i]);
            cout<<s<<"\n";
        }
    }
