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
	int n,k,t;
	cin >> n;
	cin >> k;
	cin >> t;
	int z = floor((n*k*t)/100);
	int squares = floor(z/k);
	for(int i = 0; i < squares; i++){
		cout << k << " ";
	}
	if(squares == n){
		return 0;
	}
	cout << z - squares*k << " ";
	for(int i = squares+1; i < n;i++){
		cout << 0 << " ";
	}
}

