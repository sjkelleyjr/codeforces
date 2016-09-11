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
	int n;
	cin >> n;
	for(int i = 0; i<=n*2;i++){
		for(int j = 0; j <= 2*n;j++){
			
			cout << " ";	
		}
		cout << endl;
	}
}

