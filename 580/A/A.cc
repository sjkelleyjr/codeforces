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
	long long length = 0;
	long long last = INT_MIN;
	long long ans = 0;
	for(long long i =0 ; i<n;i++){
		long long a;
		cin >> a;
		if(a >= last){
			length++;
		}else{
			length = 1;
		}
		last = a;
		ans = max(length,ans);
	}
	cout << ans << endl;
}

