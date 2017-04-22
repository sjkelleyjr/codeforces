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
	if(s.length() < 5){
		cout << "Too weak" << endl;
		return 0;
	}
	bool hasUpper = false;
	bool hasLower = false;
	bool hasNum = false;
	for(auto i: s){
		if(isupper(i)){
			hasUpper = true;
		}
		if(islower(i)){
			hasLower = true;
		}
		if(isdigit(i)){
			hasNum = true;
		}
	}
	if(!hasUpper || !hasLower || !hasNum){
		cout << "Too weak" << endl;
	}else{
		cout << "Correct" << endl;
	}
}
