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
	uint64_t n;
	cin >> n;
	map<uint64_t, uint64_t> m;
	for(uint64_t i = 0; i< n;i++){
		uint64_t a;
		cin >> a;
		m[a]++;
	}
	uint64_t dp[n];
	dp[0] = 0;
	dp[1] = m[1];
	for(uint64_t i = 2; i <= n;i++){
		dp[i] = max(dp[i-1],dp[i-2]+m[i]*i);	
		if(i == 100000){
			cout << "setting " << i << " to " << dp[i] << endl;
		}
	}
	cout << dp[n] << endl;
}

