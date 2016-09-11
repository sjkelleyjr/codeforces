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

const long long N = 1000000;

void sieve(bool nonPrime[]){
	//sieve of erastothenes.
	for (long long i = 2; i <= N; i++) {
		if (nonPrime[i]) {
			continue;
		}
		for (long long j = i + i; j <= N; j += i) {
			nonPrime[j] = true;
		}
	}
}

int main() 
{
	int n,m;
	cin >> n >> m;
	long long arr[n][m];
	bool isPrime[n][m];
	for(int i = 0; i <n;i++){
		for(int j = 0; j < m;j++){
			isPrime[i][j] = false;
		}
	}
	static bool nonPrime[N+1];
	nonPrime[0] = nonPrime[1] = true;
	sieve(nonPrime);
	for(int i = 0; i < n;i++){
		for(int j = 0; j < m;j++){
			long long t;
			cin >> t;
			arr[i][j] = t;
			if(!nonPrime[t]){
				isPrime[i][j] = true;	
			} 
		}
	}
	int pCount_row = 0;
	int pCount_col = 0;
	int maxRow = 0;
	int maxRow_index = 0;
	int maxCol = 0;
	int maxCol_index = 0;
	for(int i = 0; i<n;i++){
		pCount_row = 0;
		pCount_col = 0;
		for(int j = 0; j < m;j++){
			if(isPrime[i][j]){
				pCount_row++;
			}
			if(isPrime[j][i]){
				pCount_col++;
			}
		}
		if(pCount_row > maxRow){
			maxRow = pCount_row;
			maxRow_index = i;
		}
		if(pCount_col > maxCol){
			maxCol = pCount_col;
			maxCol_index = i	;
		}
	}
	if(maxCol == m || maxRow == n){
		cout << 0 << endl;
		return 0;
	}
	int badonesRow = m - maxRow;
	int badonesCol = n - maxCol;
	long long ans = 0;
	if(badonesCol < badonesRow){
		for(int i = 0; i < n;i++){
			if(!isPrime[i][maxCol_index]){
				//need to binary search this to optimize.
				for(int j = 1;j < N;j++){
					long long cPrime = arr[i][maxCol_index] + j;
					if(!nonPrime[cPrime]){
						ans += cPrime - arr[i][maxCol_index];
						break;
					}
				}
			}
		}
	}else{
		for(int i = 0; i<m;i++){
			if(!isPrime[maxRow_index][i]){
				//need to binary search this to optimize.
				for(int j = 1;j < N;j++){
					long long candidatePrime = arr[maxRow_index][i] + j;
					if(!nonPrime[candidatePrime]){
						ans += candidatePrime - arr[maxRow_index][i];
						break;
					}
				}
			}
		}
	}
	
	cout << ans << endl;
}

