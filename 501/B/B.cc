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
	map<string, string> m;
	for(int i = 0; i<n;i++){
		string s1, s2;
		cin >> s1;
		cin >> s2;
		bool found = false;
		for(map<string,string>::iterator it = m.begin(); it != m.end();it++){
			if(it->second == s1){
				found = true;
				it->second = s2;
			}
		}
		if(!found){
			m[s1] = s2;
		}
	}
	cout << m.size() << endl;
	for(auto i: m){
		cout << i.first << " " << i.second << endl;
	}
}
