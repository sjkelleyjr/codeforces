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
	int tn,x,y;
	cin >> tn >> x >> y;
	tn /= 2;
	if((x == tn || x == tn+1) && (y == tn || y == tn+1)){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
}

