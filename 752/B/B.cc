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
	map<char,char> m;
	string s1,s2;
	cin >> s1 >> s2;
	//if the two lengths are different deal with that
	for(int i = 0; i < s1.length();i++){
		bool found = false;
		if(!m.empty()){
			for(auto j: m){
				if(j.first == s1[i] && j.second != s2[i]){
					cout << -1 << endl;
					return 0;
				}
				if(j.second == s2[i] && j.first != s1[i]){
					cout << -1 << endl;
					return 0;
				}
				if(j.second == s1[i] && j.first != s2[i]){
					cout << -1 << endl;
					return 0;
				}
				if(j.first == s2[i] && j.second != s1[i]){
					cout << -1 << endl;
					return 0;
				}
				if(j.first == s1[i] && j.second == s2[i]){
					found = true;
				}
				if(j.first == s2[i] && j.second == s1[i]){
					found = true;
				}
			}
			if(!found){
				m.insert({s1[i],s2[i]});
			}			
		}else{
			m.insert({s1[i],s2[i]});
		}
	}
	vector<pair<char,char> > ans;
	for(auto i: m){
		if(i.first != i.second){
			ans.push_back({i.first, i.second});
		}
	}
	cout << ans.size() << endl;
	for(auto i: ans){
		cout << i.first << " " << i.second << endl;
	}
}
