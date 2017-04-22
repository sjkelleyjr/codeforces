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
	vector<int> _k(n);
	for(int i = 0; i < n ;i++){
		cin >> _k[i];
	}
	int ans = INT_MAX;
	for(int i = 0; i < n;i++){
		int thisAns = 0;
		for(int j = 0; j < _k[i]; j++){
			int num;
			cin >> num;
			thisAns += num*5;
		}
		ans = min(ans, thisAns + 15*_k[i]);
	}
	cout << ans << endl;
}
