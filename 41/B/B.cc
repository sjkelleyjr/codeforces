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
	int n,b;
	cin >> n >> b;
	int ans = b;
	int arr[n];
	for(int i = 0; i<n;i++){
		int val;
		cin >> val;
		arr[i] = val;
	}
	for(int i = 0; i<n;i++){
		int buy  = b/arr[i];
		int more = b%arr[i];
		for(int j = i; j < n;j++){
			int sell = buy*arr[j]+more;
			ans = max(ans,sell);
		}
	}
	cout << ans << endl;
}

