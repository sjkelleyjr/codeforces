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
	int n,k,place;
	cin >> n;
	cin >> k;
	int kPlace = 0;
	int arr[n+1];
	//will O(2n) work?
	for(int i = 0 ; i < n; i++){
		cin >> place;
		if(i == k-1){
			kPlace = place;	
		}
		arr[i] = place;
	}
	int count = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] <= 0){
			break;
		}
		if(arr[i] >= kPlace){
			count++;
		}
		if(arr[i] < kPlace){
			break;
		}
	}
	cout << count;
}

