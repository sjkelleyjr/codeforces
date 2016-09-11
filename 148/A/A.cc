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
	int k,l,m,n;
	long long d;
	cin >> k >> l >> m >> n >> d;
	long long count = 0;
	//how many 1-d variables are divisibly by k, then l, then m, etc
	for(long long i = 1; i <= d;i++){
		if(i % k == 0 || i % l == 0 || i % m == 0 || i% n ==0){
			count++;
		}
	}
	cout << count << endl;
}

