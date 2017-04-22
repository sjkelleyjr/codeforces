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
	int a,b,c;
	cin >> a >> b >> c;
	int ans = 0;
	for(int i = a; i >= 0;i--){
		if(i*2 <= b && i*4 <= c){
			cout << i + i*2 + i*4 << endl;
			return 0;	
		}
	}
}
