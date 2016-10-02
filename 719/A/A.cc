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
	bool up =  false;
	int a;
	int arr[n];
	for(int i =0 ; i< n;i++){
		cin >> a;
		arr[i] = a;
	}
	if(arr[n-1] == 15){
		cout << "DOWN" << endl;
		return 0;
	}
	if(arr[n-1] == 0){
		cout << "UP" << endl;
		return 0;
	}
	if(n == 1){
		cout << -1;
	}else if((arr[n-1] - arr[n-2]) > 0 ){
		cout << "UP" << endl;
	}else{
		cout << "DOWN" << endl;
	}
}

