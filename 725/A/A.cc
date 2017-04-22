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
	//			      right       left
	//count the number of positions of > with no < after
	//                           left         right
	//and the number of positions of < with no > before
	//get last left position
	//get first right position
	string s;
	cin >> s;
	int lastLeft = -1;
	int firstRight = -1;
	int count = 0;
	for(int i = 0; i< n;i++){
		if(s[i] == '<'){
			lastLeft = i;
		}
		if(s[i] == '>' && firstRight == -1){
			firstRight = i;
		}
	}
	for(int i = 0; i< n;i++){
		if((s[i] == '<' && i < firstRight) || firstRight == -1){
			count++;
		}
		if((s[i] == '>' && i > lastLeft) || lastLeft == -1){
			count++;
		}
	}
	cout << count << endl;
}
