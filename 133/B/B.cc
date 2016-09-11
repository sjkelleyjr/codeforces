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
	map<char,string> commandMap;
	commandMap['>'] = "1000";
	commandMap['<'] = "1001";
	commandMap['+'] = "1010";
	commandMap['-'] = "1011";
	commandMap['.'] = "1100";
	commandMap[','] = "1101";
	commandMap['['] = "1110";
	commandMap[']'] = "1111";
	string binString;
	for(int i = 0; i< s.length();i++){
		binString+=commandMap[s[i]];
	}
	unsigned long long val = bitset<64>(binString).to_ullong()%1000003;
	cout << val << endl;
}

