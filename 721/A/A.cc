// Create your own template by modifying this file!
#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
     #define debug(args...)            {dbg,args; cerr<<endl;}
#else
    #define debug(args...)              // Just strip off all debug tokens
#endif

struct debugger
{
    template<typename T> debugger& operator , (const T& v)
    {    
        cerr<<v<<" ";    
        return *this;    
    }
} dbg;

int main() 
{
	int n;
	cin >> n;
	int arr[n];
	int bCount = 0;
	int arrIndex = 0;
	for(int i =0 ; i< n;i++){
		char c;
		cin >> c;
		arr[i] = c;
	}
	vector<int> ans;
	int rowCount = 0;
	for(int i = 0; i < n;i++){
		if(arr[i] == 'B'){
			rowCount++;
			int bCount = 1;
			i++;
			while(i!=n && arr[i] == 'B'){
				bCount++;
				i++;
			}
			ans.push_back(bCount);
		}
	}
	cout << ans.size() << endl;
	for(auto i: ans){
		cout << i << " ";
	}
}

