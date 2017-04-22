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


class order{
public:
	int original, value, color;
	order(int original, int value): original(original),value(value){}
	order(){}
};


int main() 
{
	int n, m;
	cin >> n >> m;
	vector<order> nums(n);
	for(int i = 0; i <  n;i++){
		int num;
		cin >> num;
		order o(i,num);
		nums[i] = o;
	}
	sort(nums.begin(), nums.end(), [](order a, order b){return a.value < b.value; });
	for(int i = 0; i < n;i++){
		if(i%2 == 0){
			nums[i].color = 1;
		}else{
			nums[i].color = 0;
		}
	}
	
	sort(nums.begin(), nums.end(), [](order a, order b){return a.original < b.original; });
	for(auto i: nums){
		cout << i.color << " ";
	}
}
