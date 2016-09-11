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
	scanf("%d%d",&n,&m);
	int courses[n][m];
	int sol = 0;
	for(int i = 0; i < n;i++){
		int max = 0;
		for(int j = 0; j < m;j++){
			char c;
			cin >> c;
			int n = c- '0';
			courses[i][j] = n;
		}
	}
	for(int i = 0;i < n;i++){
		bool best = false;
		for(int j = 0; j <m;j++){
			bool isBest = true;
			for(int k = 0; k < n; k++){
				if(courses[k][j] > courses[i][j]){
					isBest = false;
				}
			}
			if(isBest){
				best = true;
			}
		}
		if(best){
			sol++;
		}
	}
	cout << sol << endl;
}

