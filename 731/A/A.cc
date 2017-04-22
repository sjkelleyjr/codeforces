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
	string s;
	cin >> s;
	int ans = 0;
	char last = 'a';
	for(int i = 0; i < s.length();i++){
		ans += min(abs(last-s[i]),26 - abs(last-s[i]));
		last = s[i];
	}
	cout << ans << endl;
}

