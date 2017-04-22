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
	for(int i =0; i < n;i++){
		int a;
		cin >> a;
		arr[i] =  a;
	}
	int lastone = 0;
	int count = 1;
	int oneCount = 0;
	for(int i =1; i <= n;i++){
		if(arr[i-1] == 1){
			oneCount++;
			count *= i - lastone;	
			lastone = i;
		}
	}
	if(oneCount == 1){
		cout << 1 << endl;
		return 0;
	}	
	if(lastone == 0){
		cout << 0 << endl;
		return 0;
	}
	cout << count << endl;
}

