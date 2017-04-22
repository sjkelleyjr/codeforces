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
	string s;
	cin >> s;
	int downCount = 0;
	int upCount = 0;
	int moves = 0;
	for(int i = 0; i < n;i++){
		if(s[i] == 'x') downCount++;
		if(s[i] == 'X') upCount++;
	}
	if(downCount < upCount){
		//need to make x -> X
		for(int i = 0; i < n && downCount < upCount; i++){
			if(s[i] == 'X'){
				s[i] = 'x';
				downCount++;
				upCount--;
				moves++;
			}
		}
	}else{
		//need to make X -> x
		for(int i = 0; i < n && upCount < downCount; i++){
			if(s[i] == 'x'){
				s[i] = 'X';
				upCount++;
				downCount--;
				moves++;
			}
		}
	}
	cout << moves << endl;
	cout << s << endl;	
}
