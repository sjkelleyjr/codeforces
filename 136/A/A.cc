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
	int arr[n+1];
	for(int i = 1; i<=n;i++){
		int p;
		cin >> p;
		arr[p] = i;
	}
	for(int i = 1; i <=n;i++){
		cout << arr[i] << " ";
	}
}

