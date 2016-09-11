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
	int arr[m];
	priority_queue<int> pq;
	for(int i = 0; i<m;i++){
		int f;
		cin >> f;
		arr[i] = f;
		pq.push(f);
	}
	int ans = INT_MAX;
	while(!pq.empty()){
		int f = pq.top();
		pq.pop();
		if(pq.empty()){
			break;
		}else{
			int s = pq.top();
			pq.pop();
			int diff = f-s;
			if(diff < ans){
				ans = diff;
			}	
		}
	}
	cout << ans << endl;
}

