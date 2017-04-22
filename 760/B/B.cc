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
	long long n, m, k;
	cin >> n >> m >> k;
	long long height = 1;
	m -= n;
	long long closer = min(n-k,k-1);
	long long farther = max(n-k,k-1);
	if(m > 0){
		height++;
		m--;
	}
	long long counterCounter = 2;
	long long counter = 1;
	for(int i = 0; i < farther;i++){
		if(i == closer) counterCounter--;
		counter += counterCounter;
		if(m - counter < 0) break;
		m -= counter;
		height++;
	}
	if(m > 0){
		height += m/n;
	}
	cout << height << endl;
}
