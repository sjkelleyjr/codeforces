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
const long long N = 10000000;

void sieve(bool nonPrime[]){
	for (int i = 2; i <= N; i++) {
		if (nonPrime[i]) {
			continue;
		}
		for (int j = i + i; j <= N; j += i) {
			nonPrime[j] = true;
		}
	}	
}


int main() 
{
	long long n;
	cin >> n;
	static bool nonPrime[N+1];
	nonPrime[0] = nonPrime[1] = true;
	sieve(nonPrime);
	for(int i = 2; i<n;i++){
		if(nonPrime[i] && nonPrime[n-i]){
			cout << i << " " << n-i << endl;
			return 0;
		}
	}
}

