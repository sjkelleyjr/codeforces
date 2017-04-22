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
vector<int> bb(200);
int n,k;
int count(int i, int j){
	//put i to j at the beginning
	for(int h = i; h < n; h++){
		bb[h-i] = aa[h];	
	} 
	//put 0 to i at the end
	for(int h = 0; h < i; h++){	
		bb[n-i+h] = aa[h];
	}
	int m = j - i;
	sort(bb.begin(), bb.begin()+m);
	sort(bb.begin()+m,bb.begin()+n);
	int sum = 0;
	//get the current score for this subsection
	for(int h = 0; h < m; h++){
		sum += bb[h];
	}
	//for all swaps
	for(int s = 0; s < k;s++){
		int p = s;
		int q = n - 1 - s;
		//if there are more swaps than elements
		//or there are less elements left than there are to swap with
		//or this element in the range is greater than it's counterpart outside the range
		if(p >= m || q < m || bb[p] >= bb[q]){
			break;
		}
		sum += bb[q] - bb[p];
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
