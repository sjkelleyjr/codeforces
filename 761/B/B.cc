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

int find(vector<int> AA, int num){
	for(int i = 0; i< AA.size();i++){
		if(AA[i] == num){
			return i;
		}
	}
	return -1;
}

int main() 
{
	int n, l;
	cin >> n >> l;
	vector<int> K(n);
	vector<int> S(n);
	for(int i = 0; i< n;i++){
		int a;
		cin >> a;
		K[i] = a;
	}

	for(int i = 0; i< n;i++){
		int a;
		cin >> a;
		S[i] = a;
	}
	for(auto i: K){
		cout << i << " ";
	}
	cout << endl;
	for(auto i: S){
		cout << i << " ";
	}
	cout << endl;
	int counter = 0;
	vector<int> distsK;
	for(int i = 1; i<K.size();i++){
		int currDist = K[i] - K[i-1];
		distsK.push_back(currDist);
		counter += currDist;
	}
	int lastDist = l - counter;
	distsK.push_back(lastDist);
	counter = 0;
	//it could be any of these though
	vector<int> distsS;
	for(int i = 1; i<S.size();i++){
		int currDist = S[i] - S[i-1];
		distsS.push_back(currDist);
		counter += currDist;
	}
	lastDist = l-counter;
	distsS.push_back(lastDist);
	sort(distsK.begin(),distsK.end());
	sort(distsS.begin(),distsS.end());
	int i = 0;
	while(i < distsK.size()){
		cout << distsK[i] << " " << distsS[i] << endl;
		if(distsK[i] != distsS[i]){
			cout << "NO" << endl;
			return 0;
		}
		i++;
	}	
	int sumK = accumulate(distsK.begin(),distsK.end(),0);
	int sumS = accumulate(distsS.begin(),distsS.end(),0);
	if(sumK != l || sumS != l){
		cout << "NO" << endl;
		return 0;
	}
	
	cout << "YES" << endl;
	return 0;
}
