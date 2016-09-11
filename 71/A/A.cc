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
	string word;
	for(int i = 0; i<n;i++){
		cin >> word;
		if(word.length() <= 10){
			cout << word << endl;
			continue;
		}else{
			cout << word[0];
			int count = 0;
			for(int j = 1; j < word.length();j++){
				count++;
				if(j == word.length()-1){
					cout << count-1;
					cout << word[j] << endl;
				}
			}
		}
		
	}


}

