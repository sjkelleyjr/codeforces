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
	int n, m;
	cin >> n >> m;
	if(m < n){
		cout << n - m << endl;
		return 0;
	}
	int ans = 0;
	while(n < m){
		if(m%2 == 0){
			m /= 2;
			ans++;
		}else{
			m++;
			m /= 2;
			ans += 2;
		}
	}
	cout << ans + n - m << endl;
	
}
