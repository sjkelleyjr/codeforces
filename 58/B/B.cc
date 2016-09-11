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
	long long n;
	cin >> n;
	vector<long long> coins;
	coins.push_back(n);
	while(n > 1){
		int div = 2;
		while(div < 10){
			if(n % div == 0){
				n /= div;
				coins.push_back(n);
				div = 1;
			}
			div++;
		}
	}	
	for(int i = 0; i<coins.size();i++){
		cout << coins[i] << " ";
	}
	cout << endl;
}

