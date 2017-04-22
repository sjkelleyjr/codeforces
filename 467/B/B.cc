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
	int n,m,k;
	cin >> n >> m >> k;
	vector<long long> nums(m+1);
	int ans = 0;
	for(int i = 0; i <= m;i++){
		long long x;
		cin >> x;
		nums[i] = x;
	}
	for(int i = 0; i < m;i++){
		long long o = nums[i] ^ nums[nums.size()-1];
		int count = __builtin_popcount(o);
		if(count <= k){
			ans++;
		}
	}
	cout << ans << endl;
}

