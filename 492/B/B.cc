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
	uint64_t l;
	cin >> n >> l;
	vector<uint64_t> lights(n);
	for(uint64_t i = 0; i < n;i++){
		uint64_t light;
		cin >> light;
		lights[i] = light;
	}	
	sort(lights.begin(),lights.end());
	long double maxDiff = lights[0];
	for(uint64_t i = 1; i < n;i++){
		long double currDiff = (lights[i] - lights[i-1])/2.0;
		maxDiff = max(currDiff, maxDiff);
	}
	long double last = l-lights[n-1];
	maxDiff = max(last, maxDiff);
	cout << fixed;
	cout << setprecision(10) << maxDiff << endl;
}
