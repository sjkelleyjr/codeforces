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
	int a,b;
	cin >> a >> b;
	int diff = abs(a-b);
	if(a == 0 && b == 0){
		cout << "NO" << endl;
		return 0;
	}
	if(diff <= 1){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}
