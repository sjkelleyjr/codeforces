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
	scanf("%d\n",&n);
	bool ans = false;
	vector<string> bus;
	for(int i = 0; i<n;i++){
		string line;
		getline(cin,line);
		if(line[0] == 'O' && line[1] == 'O' && !ans){
			line[0] = '+';
			line[1] = '+';
			ans = true;
		}else if(line[3] == 'O' && line[4] == 'O' && !ans){
			line[3] = '+';
			line[4] = '+';
			ans=true;
		}
		bus.push_back(line);
	}
	if(ans){
		cout << "YES" << endl;
		for(auto i: bus){
			cout << i << endl;
		}
	}else{
		cout << "NO" << endl;	
	}
}

