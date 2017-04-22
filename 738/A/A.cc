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
	int n;
	cin >> n;
	string s;
	cin >> s;
	string newString;
	for(int i = 0; i<s.length();i++){
		while(i+2 < n && s[i] == 'o' && s[i+1] == 'g' && s[i+2] == 'o'){
			i += 3;
			while(i+1 < n && s[i] == 'g' && s[i+1] == 'o'){
				i += 2;
			}
			newString += "***";
		}
		if(i < n){
			newString += s[i];
		}

	}
	cout << newString << endl;
}
