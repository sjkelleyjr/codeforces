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
	string a,b;
	cin >> a;
	cin >> b;
	if(a.length() != b.length()){
		cout << "NO" << endl;
		return 0;
	}
	if(a == b){
		cout << "YES" << endl;
		return 0;
	}
	if(a.find('1') != string::npos && b.find('1') != string::npos){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}

