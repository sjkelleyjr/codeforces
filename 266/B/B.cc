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
	int n,t;
	cin >> n;
	cin >> t;
	vector<char> line;	
	for(int i = 0; i< n;i++){
		char child;
		cin >> child;
		line.push_back(child);
	}
	while(t > 0){
		for(int i = 1 ; i<line.size();i++){
			if(line[i-1] == 'B' && line[i] == 'G'){
				swap(line[i-1],line[i]);
				i++;
			}
		}
		t--;
	}
	cout << string(line.begin(),line.end()) << endl;
}

