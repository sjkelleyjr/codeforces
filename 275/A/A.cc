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
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5;j++){
			arr[i][j] = 0;
		}
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3;j++){
			int l;
			cin >> l;
			//if they're both valid we can place all pieces
			arr[i+1][j+1] += l;
			//below
			arr[i+2][j+1] += l;
			//above
			arr[i][j+1] += l;
			//right
			arr[i+1][j+2] += l;
			//left	
			arr[i+1][j] += l;
			//right down
			//arr[i+2][j+2] += l;
			//arr[i+2][j] += l;
			//arr[i][j+2] += l;
			//arr[i][j]  += l;
			
		}
	}
	for(int i = 0; i < 3;i++){
		for(int j = 0; j < 3;j++){
			//cout << arr[i+1][j+1] << " ";
			if(arr[i+1][j+1]  % 2 == 0){
				cout << 1;
			}else{
				cout << 0;
			}
		}
		cout << endl;
	}
}

