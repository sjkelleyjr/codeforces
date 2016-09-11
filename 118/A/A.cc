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
	vector<char> ret;
	cin >> s;
	for(auto ch:s){
		char lw = tolower(ch);
		if(lw == 'a' || lw == 'e' || lw == 'i' || lw == 'o' || lw == 'u' || lw == 'y'){
			continue;
		}else{
			ret.push_back('.');
			ret.push_back(lw);
		}
	}
	cout << string(ret.begin(),ret.end());
}

