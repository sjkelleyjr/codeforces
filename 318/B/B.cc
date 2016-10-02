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
	long long count = 0;
	long long heavy = 0;
	for(int i = 4; i < s.length();i++){
		if(s[i-4] == 'm' && s[i-3] == 'e' && s[i-2] == 't' && s[i-1] == 'a' && s[i] == 'l'){
			count += heavy;
		}

		if(s[i-4] == 'h' && s[i-3] == 'e' && s[i-2] == 'a' && s[i-1] == 'v' && s[i] == 'y'){
			heavy++;	
		
		}
	}
	cout << count << endl;
}

