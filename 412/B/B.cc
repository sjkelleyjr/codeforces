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
	int n, k;
	cin >> n >> k;
	vector<int> speeds(n);
	for(int i = 0; i< n;i++){
		cin >> speeds[i];
	}
	sort(speeds.begin(),speeds.end());
	cout << speeds[n-k] << endl;
}
