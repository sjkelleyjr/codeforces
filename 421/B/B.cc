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
	int n =  s.length();
	set<char> sym;
	sym.insert('A');
	sym.insert('H');
	sym.insert('I');
	sym.insert('M');
	sym.insert('O');
	sym.insert('T');
	sym.insert('U');
	sym.insert('V');
	sym.insert('W');
	sym.insert('X');
	sym.insert('Y');
	if(s.length() == 1 && !sym.count(s[0])){
		cout << "NO" << endl;
		return 0;
	}else if(s.length() == 1 && sym.count(s[0])){
		cout << "YES"  << endl;
		return 0;
	}
	for(int i = 0; i < n/2; i++){
		if(s[i] != s[n-i-1] || !sym.count(s[i])){
			cout << "NO" << endl;
			return 0;
		}
	}
	if(!sym.count(s[n/2])){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
}
