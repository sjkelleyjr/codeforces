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
	long n;
	long long t;
	string s;
	cin >> n >> t >> s;
	int dp[n+1];
	dp[n] = 0;
	for(int i = n-1; i >= 0;i--){
		if(s[i] - '0' == -2){
			continue;
		}
		if(s[i] - '0' >= 5){
			dp[i] = 1;
		}else if(s[i] - '0' < 4){
			dp[i] = INT_MAX;
		}else{
			dp[i] = dp[i+1] + 1; 
		}
	}
	int dpIndex = -1;
	for(int i = n-1;i > 0;i--){
		if(dp[i] > t){
			dpIndex = i;
			break;
		}
	}	
	string ans;
	if(dpIndex == n-1){
		cout << s;
		return 0;
	}
	if(s[dpIndex+1] >= 5){
		s[dpIndex]++;
	}
	for(int i =0 ; i <= dpIndex;i++){
		cout << s[i];
	}
}
