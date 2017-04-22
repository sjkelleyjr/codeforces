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
	uint64_t n, m;
	cin >> n >> m;
	uint64_t houses[m];
	for(int i = 0; i< m;i++){
		uint64_t a;
		cin >> a;
		houses[i] = a;
	}
	uint64_t ans = 0;
	ans += houses[0]-1;
	for(int i = 1; i < m;i++){
		if(houses[i] > houses[i-1]){
			ans += houses[i] - houses[i-1];
		}else if(houses[i] == houses[i-1]){
			continue;
		}else{
			ans += n + houses[i] - houses[i-1];
		}
	}	
	cout << ans << endl;
}


