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
	long n, x;
	cin >> n >> x;
	int count = 0;
	for(int i = 1; i<=n;i++){
		if(x%i == 0 && x/i <= n) count++;
	}
	cout << count << endl;
}
