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
	int n,k;
	cin >> n >> k;
	string arr[n];
	for(int i = 0; i< n;i++){
		string pass;
		cin >> pass;
		arr[i] = pass;
	}
	string  realPass;
	cin >> realPass;
	int LECount = 0;
	int LCount = 0;
	for(int i = 0; i < n;i++){
		if(arr[i].length() <= realPass.length()){
			LECount++;
		}
		if(arr[i].length() < realPass.length()){
			LCount++;
		}
	}
	cout << LCount + 5*floor(LCount/k) + 1 << " " << LECount + 5*floor((LECount -1)/k) << endl;
}

