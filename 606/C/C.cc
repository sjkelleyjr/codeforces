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

int lis(vector<int> arr){
	vector<int> DP(arr.size());
	DP[1] = 1;
	for(int i = 2; i< arr.size();i++){
		if(arr[i] > arr[i-1]){
			DP[i] = DP[i-1] + 1;
		}else{
			DP[i] = 1;
		}
	}
	return DP[arr.size()-1];
}

int main() 
{
	int n;
	cin >> n;
	vector<int> arr(n+1,INT_MAX);
	for(int i = 0; i< n;i++){
		int p;
		cin >> p;
		arr[p] = i;
	}
	//for(int i = 0; i < arr.size();i++){
	//	cout << arr[i] << " ";
	//}
	int sub = lis(arr);
	cout << n - sub << endl;
	//find LIS and sub from size
}
