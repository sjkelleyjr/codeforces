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
	long long n;
	cin >> n;
	long long arr[n];
	vector<pair<long long, long long> > mapping(n);
	for(long long i = 0; i<n;i++){
		long long a;
		cin >> a;
		arr[i] = a;
		mapping[i] = pair<long long, long long>(a,i);
	}
	sort(mapping.begin(),mapping.end());
	//sort(arr,arr+n);
	long long min = INT_MIN;
	for(long long i = 0; i < n;i++){
		if(mapping[i].first > min){
			min = mapping[i].first+1;
		}else{
			mapping[i].first = min;
			min++;	
		}
		arr[mapping[i].second] = mapping[i].first;
	}
	for(long long i =0 ; i < n;i++){
		cout << arr[i] << " ";
	}
}

