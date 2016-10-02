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
	long long n;
	cin >> n;
	long long arr[n];
	long long ans = 0;
	for(long long i = 0; i< n;i++){
		long long a;
		cin >> a;
		arr[i] = a;	
	}
	sort(arr,arr+n);
	for(int i = 1; i < n+1;i++){
		ans += abs(arr[i-1] - i);
	}
	cout << ans << endl;
}

