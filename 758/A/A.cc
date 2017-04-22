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
	vector<long long> nums(n);
	long long MAX = INT_MIN;
	long long ans = 0;
	for(int i = 0; i<n;i++){
		long long p;
		cin >> p;
		nums[i] = p;
		MAX = max(p,MAX);
	}
	for(auto i: nums){
		ans += MAX-i;
	}
	cout << ans << endl;
}
