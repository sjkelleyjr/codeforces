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
	int hpos = INT_MAX;
	int epos = INT_MAX;
	int flpos = INT_MAX;
	int slpos = INT_MAX;
	int opos  = INT_MAX;
	for(int i = 0; i<s.length();i++){
		if(s[i] == 'h' && hpos == INT_MAX){
			hpos = i;	
		}	
		if(s[i] == 'e' && hpos < i){
			epos = i;
		}
		if(s[i] == 'l' && epos < i){
			flpos = i;
			epos = s.length();
		}
		if(s[i] == 'l' && flpos < i){
			slpos = i;
		}
		if(s[i] == 'o' && slpos < i){
			opos = i;	
		}
	}
	//cout << "hpos: " << hpos << endl;
	//cout << "epos: " << epos << endl;
	//cout << "flpos: " << flpos << endl;
	//cout << "slpos: " << slpos << endl;
	//cout << "opos: " << opos << endl;
	if(hpos != INT_MAX && epos !=INT_MAX && flpos != INT_MAX && slpos != INT_MAX && opos != INT_MAX){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}
