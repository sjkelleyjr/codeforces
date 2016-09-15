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
	string ans;
	ans += s[0];
	bool at = false;
	for(int i = 1; i<s.length();){
		bool found = false;	
		if(s[i] == 'a' && s[i+1] == 't' && (i+2) != s.length()&& !at){
			ans += '@';
			found = true;	
			at = true;
			i+= 2;
		}	
		if(s[i] == 'd' && s[i+1] == 'o' && s[i+2] == 't' && (i+3) != s.length()){
			ans += '.';
			found = true;
			i += 3;
		}
		if(!found){
			ans += s[i];
			i++;
		}
		
	}
	cout << ans << endl;
}

