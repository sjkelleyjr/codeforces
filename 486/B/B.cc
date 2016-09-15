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
	int n,m;
	cin >> n >> m;
	bool arr[n][m];
	bool ans[n][m]; 
	for(int i = 0; i< n;i++){
		for(int j = 0; j < m;j++){
			int a;
			cin >> a;
			arr[i][j] = a;
		}
	}
	
	for(int i = 0; i < n;i++){

	}
}

