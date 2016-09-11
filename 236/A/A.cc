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
	set<char> chSet;
	for(int i =0; i < s.length();i++){
		chSet.insert(s[i]);
	}
	if(chSet.size() % 2 == 0){
		cout << "CHAT WITH HER!" << endl;
	}else{
		cout << "IGNORE HIM!" << endl;
	}
}

