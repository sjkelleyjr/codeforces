#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	const int NUMPRIMES = 10000000;
	static int queryCount[NUMPRIMES + 1];
	for(int i = 0; i< n;i++){
		int query;
		cin >> query;
		cout << query << endl;
		queryCount[query]++;
	}
	static bool nonPrime[NUMPRIMES+1];
	static long function[NUMPRIMES+1];
	nonPrime[0] = nonPrime[1] = true;
	for(int i = 2; i < NUMPRIMES;i++){
		if(nonPrime[i]){
			continue;
		}
		for(int j = i + i; j < NUMPRIMES; j+=i){
			nonPrime[j] = true;
		}
		for(int j = i; j < NUMPRIMES; j+=i){
			function[i] += queryCount[j];
		}
	}	
	for(int i = 1; i < NUMPRIMES;i++){
		function[i] += function[i-1];
	}
	int m;
	cin >> m;
	int l,r;
	for(int i = 0; i<m;i++){
		cin >> l;
		cin >> r;
		if(r > NUMPRIMES){
			r = NUMPRIMES;
		}
		if(l > NUMPRIMES){
			cout << 0 << endl;
		}else{
			cout << function[r] - function[l-1] << endl;
		}
	}
}
