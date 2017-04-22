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
	long double ans = (1/n) + 1/(n+1) + 1/(n*(n+1));
	if((n+1) == (n*(n+1))){
		cout << -1 << endl;
	}else{
		cout << n << " " << (n+1) << " " << n*(n+1) << endl;
	}
}
