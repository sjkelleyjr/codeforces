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
	//  1 1 1
	// 1 2 3 4
	//1 2 4 7 11
	long long N;
	cin >> N;
	long long m = floor((-1 + sqrt(8*N-7))/2);
	long long ans = N - m*(m+1)/2;
	cout << ans << endl;

}
