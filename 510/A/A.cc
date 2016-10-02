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
	char arr[n][m];
	for(int i =0 ; i < n;i++){
		for(int j =0 ; j <m;j++){
			arr[i][j] = '.';
		}
	}
	for(int i = 0; i < n; i+=2){
		for(int j = 0; j < m;j++){
			arr[i][j] = '#';	
		}
	}
	bool s = false;
	for(int i = 1; i < n-1; i+=2){
		if(!s){
			arr[i][m-1] = '#';
		}else{
			arr[i][0] = '#';
		}
		s = !s;
	}
	for(int i =0 ; i < n;i++){
		for(int j =0 ; j <m;j++){
			cout << arr[i][j];
		}
		cout << endl;
	}
}

