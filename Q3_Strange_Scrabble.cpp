    #include <bits/stdc++.h>
         
        using namespace std;
         
        int main() {
        	int num;
        	cin >> num;								
         
            while(num--){
                int m;
                cin>>m;
                string str;
                cin>>str;
     
                int n = str.size();
     
        int res = 0; 
        vector<int> lastIndex(256, -1);
     
        int i = 0;
     
        // Move end of current window
        for (int j = 0; j < n; j++) {
     
            
            i = max(i, lastIndex[str[j]] + 1);
     
            // Update result if we get a larger window
            res = max(res, j - i + 1);
     
            // Update last index of j.
            lastIndex[str[j]] = j;
        }
        cout<< res<<"\n";
         
            }
        }
