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


//vector<vector<int> > graph(11111,vector<int>());
//map<int,bool> visited;
//
//void dfs(int node){
//	stack<int> s;
//	s.push(node);
//	while(!s.empty()){
//		int top = s.top();
//		s.pop();
//		visited[top] = true;
//		for(auto i: graph[top]){
//			if(!visited[i])
//				s.push(i);
//		}
//	}
//}

int main() 
{
	int n;
	cin >> n;
	set<int> s;
	int ans = 0;
	for(int i = 1; i <= n;i++){
		int foo;
		cin >> foo;
		if(foo == i){
			ans++;
		}else{
			s.insert(foo);
		}
	}
	cout << ans + (int)s.size()/2 << endl;
	//int n;
	//cin >> n;
	//for(int i = 1; i <=n ;i++){
	//	int node;
	//	cin >> node;
	//	graph[i].push_back(node);
	//	graph[node].push_back(i);
	//}
	//int ans = 0;
	//for(int i = 1; i<=n;i++){
	//	if(!visited[i]){
	//		dfs(i);
	//		ans++;
	//	}
	//}
	//cout << ans << endl;
}
