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
	priority_queue<int> pq;
	int myTotal = 0;
	int ans = 0;
	int sum = 0;
	for(int i =0 ; i<n;i++){
		int coin;
		cin >> coin;
		sum += coin;
		pq.push(coin);
	}
	while(!pq.empty()){
		int t = pq.top();
		pq.pop();
		if(myTotal <= sum/2){
			myTotal += t;
			ans++;
		}else{
			break;
		}
	}
	cout << ans << endl;
}

