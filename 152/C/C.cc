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
	int numNames,nameLength;
	cin >> numNames;
	cin >> nameLength;
	cin.get();
	vector<string> names;
	for(int i = 0; i< numNames;i++){
		string s;
		cin >> s;
		names.push_back(s);
	}
	long long ans = 1;
	for(int i = 0; i<nameLength;i++){
		//hold all unique chars in the col
		set<char> nameChar;
		for(int j = 0; j < numNames;j++){
			nameChar.insert(names[j][i]);
		}
		ans = ans * (long long) nameChar.size() % 1000000007;
	}
	cout << ans << endl;
}

