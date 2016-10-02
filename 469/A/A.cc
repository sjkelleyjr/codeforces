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
	map<int,int> m;
	int p;
	cin >> p;
	for(int i =0 ; i< p;i++){
		int a;
		cin >> a;
		m[a]++;
	}
	int q;
	cin  >> q;
	for(int i = 0; i< q;i++){
		int a;
		cin >> a;
		m[a]++;
	}
	int count = 0;
	for(auto i : m){
		if(i.second > 0){
			count++;
		}
	}
	if(count >= n){
		cout << "I become the guy." << endl;
	}else{
		cout << "Oh, my keyboard!" << endl;
	}
}

