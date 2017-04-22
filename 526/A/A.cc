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
	for(int i = 0; i < n;i++){
		if(s[i] == '*'){
			for(int j = 1; j < n;j++){
				if(i + j*4 < n && s[i+j] == '*' && s[i + j*2] == '*' && s[i+j*3] == '*' && s[i+j*4] == '*'){
					cout << "yes" << endl;
					return 0;
				}
			}
		}
	}
	cout << "no" << endl;
	return 0;
}
