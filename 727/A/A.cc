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
	long long a,b;
	cin >> a >> b;
	stack<long long> s;
	s.push(a);
	long long ans = -1;
	map<long long, long long> parentMap;
	int i = 0;
	map<long long, bool> visited;
	while(!s.empty()){
		long long top = s.top();
		s.pop();
		visited[top] = true;
		if(top > b){
			continue;
		}
		if(top == b){
			ans =  top;
			break;
		}
		parentMap[top*2] = top;
		parentMap[top*10+1] = top;
		if(!visited[top*2]){
			s.push(top*2);
		}
		if(!visited[top*10+1]){
			s.push(top*10+1);	
		}
	}
	if(ans == -1){
		cout << "NO" << endl;
		return 0;
	}else{
		cout << "YES" << endl;
		stack<long long> path;
		long long num = b;
		while(parentMap[num] != a){
			path.push(parentMap[num]);
			num = parentMap[num];
		}
		cout << path.size()+2 << endl;
		cout << a << " ";
		while(!path.empty()){
			cout << path.top() << " ";
			path.pop();
		}
		cout << b << endl;
		//print path length and path.
	}

}

