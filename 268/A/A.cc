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
	int arr[n][2];
	int count = 0;
	for(int i =0 ; i< n;i++){
		int h,a;
		cin >> h >> a;
		arr[i][0] = h;
		arr[i][1] = a;
	}
	for(int i = 0; i<n;i++){
		for(int j = 0; j < n;j++){
			if(arr[i][0] == arr[j][1]){
				count++;
			}
		}
	}
	cout << count << endl;
}

