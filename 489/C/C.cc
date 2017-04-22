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

bool can(int m, int s){
	return s>=0&&s<=9*m;
}


int main() 
{
	int m,s;
	cin >> m >> s;
	string minn,maxx;
	int sum = s;
	if(s <= 0 && m > 1 || s > 9*m){
		cout <<"-1 -1"<< endl;
		return 0;
	}
	for(int i = 0; i<m;i++){
		for(int d = 0;d<10;d++){
			if((i > 0 || d > 0 || (m==1 && d==0)) && can(m-i-1,sum-d)){
				minn += char('0'+d);
				sum -= d;
				break;
			}
		}
	}
	sum = s;
	for(int i = 0; i<m;i++){
		for(int d = 9; d >= 0;d--){
			if((i > 0 || d > 0 || (m==1 && d==0)) && can(m-i-1,sum-d)){
				maxx += char('0'+d);
				sum -= d;
				break;
			}
		}
	}
	cout << minn << " " << maxx << endl;
}
