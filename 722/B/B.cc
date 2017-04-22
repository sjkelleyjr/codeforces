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
	int lines;
	cin >> lines;
	int scheme[lines];
	for(int i =0 ; i< lines;i++){
		int s;
		cin >> s;
		scheme[i] = s;
	}
	//read in the line, iterate it, count the number of vowels
	//if equal to scheme[i], continue, else cout "NO" and return.
	for(int i =0 ; i< lines;i++){	
		string s;
		cin >> s;
		int vCount = 0;
		cout << s << endl;
	//	for(auto j: s){
	//		if(j == 'a' || j == 'e' || j == 'i' || j == 'o' || j == 'u' || j == 'y'){
	//			vCount++;	
	//		}
	//	}
	//	cout << vCount << endl;
	//	if(vCount != scheme[i]){
	//		cout << "NO" << endl;
	//		return 0;
	//	}
	}
	cout << "YES" << endl;
}

