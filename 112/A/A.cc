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
	string s1,s2;
	cin >> s1;
	cin >> s2;
	for(int i = 0; i< s1.length();i++){
		if(tolower(s1[i]) < tolower(s2[i])){
			cout << -1;
			return 0;
		}
		if(tolower(s2[i]) < tolower(s1[i])){
			cout << 1;
			return 0;
		}
	}
	cout << 0;
}

