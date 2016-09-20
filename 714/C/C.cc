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
	int t;
	cin >> t;
	int t_t = 0;
	int arr[1000000];
	for(int i = 0; i<t;i++){
		char c;
		cin >> c;
		long long a;
		cin >> a;
		long long bin=0;
		for(int j = 1; j <= 18;j++){
			bin = bin*2 + (a&1);
			a /= 10;
		}
		if(c == '+'){
			arr[bin]++;
		}else if(c == '-'){
			arr[bin]--;
		}else{
			cout << arr[bin] << endl;
		}
	}
}

