    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main() {
    	int num;
    	cin >> num;										
     
    	while(num--){
    		int a,b,c,d,e,f;
    		cin>>a>>b>>c>>d>>e>>f;
     
    		int l1=abs(e-a)+abs(f-b);
    		int l2 = max(abs(e-c),abs(f-d));
            
            if(l1<l2)
        		cout<<"1\n";
            else
        		cout<<"0\n";
               
    	}
    }
