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

void printRight(string s){
	for(int i = 0; i < s.length();i++){
		cout << "PRINT " << s[i] << endl;
		if(i != s.length()-1){
			cout << "RIGHT" << endl;
		}
	}
}


void printLeft(string s){
	for(int i = s.length()-1; i >= 0; i--){
		cout << "PRINT " << s[i] << endl;
		if(i != 0){
			cout << "LEFT" << endl;
		}
	}
}

int main() 
{
	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	//depending on which side we're closer to, go to that side, 
	//then call routine to print
	if(k > floor(n/2)){
		//cout << "go to the right" << endl;
		//print the number of rights to get to the end	
		int kCount = k;
		while(k++ < n){
			cout << "RIGHT" << endl;
		}
		printLeft(s);
	}else{
		//cout << "go to the left" << endl;
		//print the number of lefts to get to the end
		int kCount = k;
		while(k-- > 1){
			cout << "LEFT" << endl;
		}
		printRight(s);
	}	
}
