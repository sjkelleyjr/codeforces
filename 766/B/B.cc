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

bool checkRange(long long index, vector<long long>&nums){
	long long last = nums[index];
	long long first = nums[index-1];
	long long lower = last-first;
	long long upper = last+first;
	lower++;
	upper--;
	for(long long i = lower; i <= upper;i++){
		if(binary_search(nums.begin(),nums.begin()+index,i)){
			return true;
		}
	}
	return false;
}


int main() 
{
	long long n;
	cin >> n;
	vector<long long> nums(n);
	for(long long i = 0; i< n;i++){
		long long a;
		cin >> a;
		nums[i] = a;
	}
	sort(nums.begin(),nums.end());
	for(long long i = n-1; i >= 0;i--){
		if(checkRange(i, nums)){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
}
