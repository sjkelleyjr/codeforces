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
	int countOne = 0;
	int countTwo = 0;
	char roaches[n];
	for(int i =0; i < n; i++){
		char c;
		cin >> c;
		roaches[i] = c;
	}
	int x = 0;
	int y = 0;
	for(int i = 0; i< n;i++){
		if(i%2 == 0 && roaches[i] != 'r'){
			x++;
		}else if(i%2 != 0 && roaches[i] != 'b'){
			y++;
		}
	}
	countOne = max(x,y);
	x = 0;
	y = 0;
	for(int i = 0; i< n;i++){
		if(i%2 == 0 && roaches[i] != 'b'){
			x++;
		}else if(i%2 != 0 && roaches[i] != 'r'){
			y++;
		}
	}
	countTwo = max(x,y);
	cout << min(countOne,countTwo) << endl;
}

