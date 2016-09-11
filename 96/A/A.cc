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
	for(int i = 6; i < s.length();i++){
		if(s[i-6] == '1' && s[i-5] == '1' && s[i-4] == '1'
		&& s[i-3] == '1' && s[i-2] == '1' && s[i-1] == '1'
		&& s[i] == '1'){
			cout << "YES" << endl;
			return 0;
		}
		if(s[i-6] == '0' && s[i-5] == '0' && s[i-4] == '0'
		&& s[i-3] == '0' && s[i-2] == '0' && s[i-1] == '0'
		&& s[i] == '0'){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
}

