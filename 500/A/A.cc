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
	long t;
	cin >> n >> t;
	long arr[n];
	for(long i =0 ; i<  n;i++){
		long p;
		cin >> p;
		arr[i] = p;
	}	
	long i = 0;
	while(i < n){
		if(i == t-1){
			cout << "YES" << endl;
			return 0;
		}
		i += arr[i];
	}
	cout << "NO" << endl;
}

