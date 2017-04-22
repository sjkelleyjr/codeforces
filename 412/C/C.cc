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
	vector<string> s(n);
	map<int, char> positions;
	for(int i = 0; i < n;i++){
		cin >> s[i];
	}
	//iterate each string
	//any position that isn't a ? store it's character and position
	//in a hash map, iterate the hash map
	for(int i = 0; i< n;i++){
		for(int j = 0;j < s[i].length();j++){
			if(s[i][j] != '?'){
				if(positions.count(j) && positions[j] != s[i][j]){
					positions[j] = '?';
				}else{
					positions[j] = s[i][j];
				}
			}
		}
	}
	vector<char> ans(s[0].length(),'z');
	for(auto i: positions){
		ans[i.first] = i.second;
	}	
	for(auto i: ans){
		cout << i;
	}
}
