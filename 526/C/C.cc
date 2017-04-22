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
 

int unboundedKnapsack(long long W, long long n, vector<long long> val, vector<long long> wt)
{
    // dp[i] is going to store maximum value
    // with knapsack capacity i.
    long long dp[W+1];
    memset(dp, 0, sizeof dp);
 
    long long ans = 0;
 
    // Fill dp[] using above recursive formula
    for (long long i=0; i<=W; i++)
      for (long long j=0; j<n; j++)
         if (wt[j] <= i)
            dp[i] = max(dp[i], dp[i-wt[j]]+val[j]);
 
    return dp[W];
}


int main() 
{
	//cap, joy, grams
	long long c,hr,hb,wr,wb;
	cin >> c >> hr >> hb >> wr >> wb;
	//if there is a kind of candy that weighs greater than Hb/wb and wb is less than c we take it
	//otherwise, we take the amount of the other candy.
	//take the greatest until the amount we can take of the second*it's health
	//is greater than the greater of the two
	//long long maxH = INT_MIN;
	//long long maxW = INT_MIN;
	//if(hr > hb){
	//	maxH = hr;
	//	maxW = wr;
	//}else{
	//	maxH =
	//}
}
