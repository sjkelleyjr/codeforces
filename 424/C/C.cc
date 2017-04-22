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
	long long n;
	cin >> n;
	long long ans = 0;
	long long DP[n+1];
	DP[0] = 0;
	for(long long i = 1; i <= n;i ++){
		long long a_i;
		cin >> a_i;
		DP[i] = DP[i-1] ^ i;
		if((n/i) % 2 == 0){
			a_i ^= DP[n%i];
		}else{
			a_i ^=  DP[i-1] ^ DP[n%i];
		}	
		ans ^= a_i;
	}
	cout << ans << endl;
}
