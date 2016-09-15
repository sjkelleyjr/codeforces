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
	long n;
	cin >> n;
	long arr[n];
	long ans = 0;
	long sum = 0;
	for(long  i = 0; i < n;i++){
		long a;
		cin >> a;
		arr[i] = a;
		sum += a;
	}
	string s;
	cin >> s;
	for(long i = n-1; i >= 0;i--){
		if(s[i] =='1'){
			if(ans < sum-arr[i]){
				ans = sum-arr[i];
			}
		}else{
			sum -= arr[i];
		}
	}
	if(ans<sum){
		ans = sum;
	}
	cout << ans << endl;
}

