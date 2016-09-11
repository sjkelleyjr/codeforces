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
	for(int i =0 ; i< s.length();i++){
		if(s[i] == 'H' || s[i] == '9' || s[i] == 'Q'){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
}

