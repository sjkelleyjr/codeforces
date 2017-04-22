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
	int n;
	cin >> n;
	vector<int> M(n);
	vector<int> R(n);
	for(int i = 0; i < n;i++){
		int m;
		cin >> m;
		M[i] = m;
	}
	for(int i = 0; i < n;i++){
		int r;
		cin >> r;
		R[i] = r;
	}
	int numMine = 0;
	for(int i = 0; i < 800000; i++){
		for(int j = 0; j < M.size();j++){
			if(i%M[j] == R[j]){
				numMine++;
				break;
			}
		}
	}
	cout << numMine/800000.0 << endl;
}
