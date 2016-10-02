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
	long long n;
	cin >> n;
	for(long long i = 1; i <= n;i++){
		if(i == 1){
			cout << 2 << endl;
		}else{
			cout << i*(i+1)*(i+1)-(i-1) << endl;
		}
	}
}

