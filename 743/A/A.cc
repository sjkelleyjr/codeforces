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
	long long n, a, b;
	cin >> n >> a >> b;
	a--;
	b--;
	//either v can use his airport (cost is 0)
	//or its the cost to the closest one opposite him
	string s;
	cin >> s;
	if(s[a] == s[b]){
		cout << 0 << endl;
		return 0;
	}else{
		long long up = INT_MAX;
		long long down = INT_MAX;
		for(int i = a+1; i<n;i++){
			if(s[i] != s[a]){
				up = abs(s[i] - s[a]);
				break;
			}
		}
		for(int i = a-1; i >= 0;i--){
			if(s[i] != s[a]){
				down = abs(s[i] - s[a]);
				break;
			}
		}
		long long best = min(up,down);
		cout << best << endl;
		return 0;
	}
}
