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
	int k, n;
	cin >> k >> n;
	map<string, int> m;
	for(int i = 0; i<k;i++){
		string s;
		int a;
		cin >> s >> a;
		m[s] = a;
	}
	

}
