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
	int n,m;
	cin >> n >> m;
	int arr[m][4];
	for(int i =0 ; i<m;i++){
		int l,r,t,c;
		cin >> l >> r >> t >> c;
		arr[i][0] = l;
		arr[i][1] = r;
		arr[i][2] = t;
		arr[i][3] = c;
	}
	int profit = 0;
	for(int i = 1; i<=n;i++){
		int minTime = INT_MAX;
		int minTime_j = -1;
		for(int j = 0; j < m;j++){
			if(arr[j][0] <= i && arr[j][1] >= i){
					if(arr[j][2] < minTime){
						minTime = arr[j][2];
						minTime_j = j;
					}
			}
		}
		if(minTime_j < 0){
			continue;
		}else{
			profit += arr[minTime_j][3];
		}
	}
	cout << profit << endl;
}

