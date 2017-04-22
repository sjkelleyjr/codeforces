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

vector<bool> sieve(int K){
	vector<bool> primes(K+1, true);
	primes[0] = false;
	primes[1] = false;
	for(int i = 2; i <= sqrt(K);i++){
		if(!primes[i]) continue;
		for(int j = i*i; j <= K;j+=i){
			primes[j] = false;
		}
	}
	return primes;
}



int main() 
{
	int n;
	cin >> n;
	vector<bool> primes = sieve(n+10001);
	for(int i = 1; i <= 1000;i++){
		if(!primes[n*i+1]){
			cout << i << endl;
			return 0;
		}
	}
}
