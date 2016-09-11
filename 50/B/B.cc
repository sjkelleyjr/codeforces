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
	map<char,uint64_t> cCount;
	for(int i = 0; i<s.length();i++){
		cCount[s[i]]++;
	}
	uint64_t ans = 0;
	for(auto i:cCount){
		ans += i.second*i.second; 
	}
	cout << ans;
}

