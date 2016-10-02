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
	char map[n][m];
	for(int i =0; i< n;i++){
		for(int j = 0; j< m;j++){
			char c;
			cin >> c;
			map[i][j] = c;	
		}
	}
	for(int i =0 ; i< n;i++){
		for(int j =0 ; j < m;j++){
			if(map[i][j] == 'B'){

			}
		}
	}
}

