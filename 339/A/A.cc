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
	string s;
	cin >> s;
	map<char,int> chCount;
	//count the number of each digit,
	//the for each, print the digit
	for(int i = 0; i < s.length();i++){
		if(i == 1){
			continue;
		}
		if(i%2 != 0){
			continue;
		}
		chCount[s[i]]++;
	}
	for(auto i: chCount){
		//if(i.first == chCount.rbegin()->first){
		//	cout << "last i " << endl;
		//}
		for(int j = 0; j < i.second;j++){
			if(i.first == chCount.rbegin()->first && j == i.second-1){
				cout << i.first;
			}else{
				cout << i.first << "+";
			}
		}
	}
	cout << endl;
}

