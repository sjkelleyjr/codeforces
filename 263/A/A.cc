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
	int arr[5][5];
	int row,col = 0;
	int ans = 0;
	for(int i = 0; i<5;i++){
		for(int j = 0; j < 5;j++){
			int n;
			cin >> n;
			if(n == 1){
				row = i;
				col = j;
			}
		}
	}
	if(col > 2){
		ans += col-2;		
	}else if(col < 2){
		ans += 2-col;	
	}
	if(row > 2){
		ans += row-2;
	}else if(row < 2){
		ans += 2-row;
	}
	cout << ans << endl;	
}

