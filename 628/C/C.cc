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

//abcdefghijklmnopqrstuvwxyz
//            ^              


char getMaxChar(char c){
	if(c > 135){
		return 'a';
	}else{
		return 'z';
	}
}

char getK(char c, int k){
	if(c + k > 122 && c - k < 97) return 0;
	if(c + k > 122){
		//go left
		return c - k;
	}else if(c - k < 97){
		//go right
		return c + k;
	}else{
		return c + k;
	}
	return 0;
}


int main() 
{

	long long n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	for(int i = 0; i < n;i++){
		char best = s[i];
		int bestDist = 0;
		for(char c = 'a';c <='z';c++){
			int dist = abs(c - s[i]);
			if(dist <= k && dist > bestDist){
				bestDist = dist;
				best = c;
			}
		}
		k -= bestDist;
		s[i] = best;
	}
	if(k > 0){
		cout << -1 << endl;
		return 0;
	}
	cout << s << endl;

}
