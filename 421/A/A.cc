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
	int n,a,b;
	cin >> n >> a >> b;
	set<int> _a;
	set<int> _b;
	for(int i = 0; i < a; i++){
		int x;
		cin >> x;
		_a.insert(x);
	}
	for(int i = 0; i < b; i++){
		int x;
		cin >> x;
		_b.insert(x);
	}
	for(int i = 1; i <= n;i++){
		if(_a.count(i)){
			cout << 1 << " ";
		}else{
			cout << 2 << " ";
		}
	}
}
