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
	long long l_1, r_1, l_2,r_2,k;
	cin >> l_1 >> r_1 >> l_2 >> r_2 >> k;
	long long lower(0),upper(0);
	lower = max(l_1,l_2);
	upper = min(r_1,r_2);
	if( lower > upper){
		cout << 0 << endl;
		return 0;
	}
	if( k < lower || k > upper){
		cout << upper-lower+1 << endl;
	}else{
		cout << upper-lower << endl;
	}
}

