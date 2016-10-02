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
	int n,m;
	cin >> n >> m;
	int ans = -1;
	int count = 0;
	while(n >= 0){
		if(count == m){
			n++;
			count = 0;
		}

		count++;
		n--;	
		ans++;
	}
	
	cout << ans << endl;
}

