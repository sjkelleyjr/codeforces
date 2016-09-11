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
	string a;
	int k;
	cin >> a >> k;
	if(a.length() == 1){
		cout << a << endl;	
		return 0;
	}
		for(int i = 0; i<a.length();i++){
			int max = INT_MIN;
			int maxPos = -1;
			for(int j = i+1; j <= i+k;j++){
				if(j == a.length()){
					break;
				}
				int a_j = a[j] - '0';
				if(a_j > max){
					max = a_j;
					maxPos = j;
				}
			}
			int a_i = a[i] - '0';
			//cout << "swapper is: " <<  max << endl;
			if(max > a_i){
				while(k > 0 && maxPos > i){
					swap(a[maxPos],a[maxPos-1]);
					maxPos--;
					k--;
				}
			}
		}
	cout << a << endl;
}

