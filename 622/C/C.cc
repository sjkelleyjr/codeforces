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

class seg{
public:
	long long val;
	long long nextNumIndex;
	seg(long long v, long long n){
		val = v;
		nextNumIndex = n;
	}
	seg(){}
};


int main() 
{
	long long n;
	long long m;
	vector<seg> nums(n);
	cin >> n >> m;
	for(long long i = 0;i < n;i++){
		long long a;
		cin >> a;
		seg s(a,-1);
		nums[i] = s;
		long long j = i-1;
		while(j >= 0 && nums[j].val == nums[i].val){
			j--;
		}
		nums[i].nextNumIndex = j;
	}
		
	for(long long i = 0; i < m;i++){
		long long l,r,x;
		cin >> l >> r >> x;
		l--;
		r--;	
		//if(nums[r].val != x){
		//	cout << r+1 << endl;
		//}else{
		//	cout << -1 << endl;
		//}
		//CHECK THIS OFF BY ONE
	/*
		else if(nums[r].nextNumIndex <= l){
			cout << -1 << endl;
		}else{
			cout << nums[r].nextNumIndex+1 << endl;
		}
	*/
	}
}
