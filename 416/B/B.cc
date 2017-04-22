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
	int m, n;
	cin >> m >> n;
	vector<vector<int> > painters(m, vector<int>(n,0));
	for(int i = 0; i< m;i++){
		for(int j = 0; j < n;j++){
			int in;
			cin >> in;
			painters[i][j] = in;
		}
	}
	vector<int> times(m,0);
	for(int i = 0; i< n;i++){
		int nextTime = 0;
		for(int j = 0; j < m;j++){
			int currStart = max(nextTime, times[j]);
			times[j] = currStart + painters[j][i];
			nextTime = times[j];
		}
	}	
	for(auto i: times){
		cout << i << " ";
	}
}
