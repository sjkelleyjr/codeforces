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
	int n;
	cin >> n;
	int arr[n];
	int max = INT_MIN;
	int min = INT_MAX;
	int maxPos = -1;
	int minPos = -1;
	int ans = 0;
	for(int i = 0; i < n;i++){
		int a;
		cin >> a;
		if(a > max){
			max = a;
			maxPos = i;
		}
		if(a <= min){
			min = a;
			minPos = i;
		}
		arr[i] = a;
	}
	if(arr[0] == max){
		maxPos = 0;
	}
	if(minPos < maxPos){
		maxPos--;
	}
	ans += maxPos;
	ans += n-(minPos+1);
	cout << ans << endl;
}

