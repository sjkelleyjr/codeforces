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
	long long n,k;
	cin >> n >> k;
	if(k <= (n+1)/2){
		cout << (k-1)*2+1;
	}else{
		k -= (n-1)/2;
		if(k-1 == 0){
			cout << 2;
			return 0;
		}else{
			cout << (k-1)*2 << endl;
		}
	}
}

