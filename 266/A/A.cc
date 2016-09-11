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
	char lastRock = ' ';
	int ans = 0;
	for(int i = 0;i < n;i++){
		char rock;
		cin >> rock;
		if(lastRock == rock){
			ans++;
		}
		lastRock = rock;
	}
	cout << ans << endl;
}

