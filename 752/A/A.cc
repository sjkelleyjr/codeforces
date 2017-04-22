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
	int n,m,k;
	cin >> n >> m >> k;
	int p = floor((k-1)/2);
	cout << floor(p/m)+1 << " " << p % m+1;
	cout << (k%2==0?" R":" L") << endl;
}
