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

class sol{
public:
	int x,k;
	sol(int x, int k) : x(x), k(k){};
	sol(){}
};


int main() 
{
	int n;
	cin >> n;
	vector<int> m(1000000,-1);
	vector<sol> s(n);
	for(int i = 0; i < n;i++){
		int x,k;
		cin >> x >> k;
		sol _s(x,k);
		s[i] = _s;
	}

	for(auto i: s){
		//if we've seen a number for this that's less than this one
		//we have problems
		if(m[i.k] < i.x-1){
			cout << "NO" << endl;
			return 0;
		}else{
			//otherwise, remember the max we've seen so far
			m[i.k] = max(m[i.k], i.x);
		}
	}

	cout << "YES" << endl;
}
