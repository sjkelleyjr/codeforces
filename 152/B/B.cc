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

bool isValid(long long x, long long y, long long n, long long m){
	if(x < 1 || x > n){
		return false;
	}
	if(y < 1 || y > m){
		return false;
	}
	return true;
}

int main() 
{
	long long n,m = 0;
	cin >> n;
	cin >> m;
	long long sq_x,sq_y = 0;
	cin >> sq_x >> sq_y;
	long long numVectors = 0;
	cin >> numVectors;
	long long ans = 0;
	for(int i = 0; i< numVectors;i++){
		long long dx,dy = 0;
		cin >> dx >> dy;
		for(long long cof = 1100000000;cof;cof/=2){
			while(isValid(sq_x + cof*dx, sq_y +cof*dy,n,m)){
				sq_x += cof*dx;
				sq_y += cof*dy;
				ans += cof;
			}
		}	
	}
	cout << ans << endl;
}

