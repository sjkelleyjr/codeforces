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
	int x_a,y_a,x_b,y_b;
	cin >> x_a >> y_a >> x_b >> y_b;
	long n;
	cin >> n;
	vector<pair<int,int> > generals;
	
	for(long i = 0; i < n;i++){
		int x_i, y_i, r_i;
		cin >> x_i >> y_i >> r_i
	}
}

