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
	string a, b;
	cin >> a;
	cin >> b;
	map<char,int> A;
	map<char,int> B;
	long long ans = 0;
	//maintain a count of letters in both and a third count of total
	//if we have enough in A for each in B add the b count to the total count
	//else if there isn't enough add 1 to the count, if the count in A is zero return -1
	for(auto i: a){
		A[i]++;
	}
	for(auto i: b){
		B[i]++;
	}
	for(auto i: B){
		if(!A.count(i.first)){
			cout << -1 << endl;
			return 0;
		}
		ans += A[i.first] < i.second ? A[i.first] : i.second;	
	}
	cout << ans << endl;
}
