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

vector<pair<int,int> > coords;
map<pair<int,int>, bool> visited;


void dfs(pair<int,int> p){
	stack<pair<int,int> > s;
	s.push(p);
	while(!s.empty()){
		pair<int,int> top = s.top();
		s.pop();
		visited[top] = true;
		for(auto i: coords){
			if(!visited[i]){
				if(i.first == top.first || i.second == top.second){
					s.push(i);
				}
			}
		}
	}
}


int main() 
{
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 0; i< n;i++){
		int x,y;
		cin >> x;
		cin >> y;
		coords.push_back({x,y});
	}
	for(auto i: coords){
		if(!visited[i]){
			ans++;
			dfs(i);
		}
	}
	cout << ans-1 << endl;
}
