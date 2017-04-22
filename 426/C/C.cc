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

vector<int> aa(200);
int n,k;
int count(int i, int j){
	vector<int> bb(aa.begin()+i, aa.begin()+j);
	for(int h = 0; h < i; h++){
		bb.push_back(aa[h]);
	}
	int m = j - i;
	sort(bb.begin(),bb.begin()+m);
	sort(bb.begin()+m, bb.end());
	int sum = accumulate(bb.begin(),bb.begin()+m,0);
	for(int s = 0; s < k; s++){
		if(s >= m || n-1-s < m || bb[s] >= bb[n-1-s]) break;
		sum += bb[n-1-1] - bb[s];
	}	
	return sum;
}


int main() 
{
	cin >> n >> k;
	for(int i = 0; i< n;i++){
		int a;
		cin >> a;
		aa[i] = a;
	}
	int maxVal = INT_MIN;
	for(int i = 0; i < n;i++){
		for(int j = i + 1; j <= n ; j++){
			int cnt = count(i,j);
			maxVal = max(maxVal, cnt);
		}
	}
	cout << maxVal << endl;
}
