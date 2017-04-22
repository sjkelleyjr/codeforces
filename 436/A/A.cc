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

class candy{
public:
	int h,m;
	candy(int h, int m):h(h),m(m){}
	candy(){};
};


int getCandies(vector<candy> zeros, vector<candy>ones, int x, bool zeroTake){
		int i = 0;
		int j = 0;
		int candyCount = 0;
		while(i < zeros.size() || j < ones.size()){
			bool tookZero = false;
			bool tookOnes = false;
			if(zeroTake && x >= zeros[i].h){
				x += zeros[i].m;
				i++;
				candyCount++;
				zeroTake = !zeroTake;
				tookZero= true;
			}else if(!zeroTake && x >= ones[j].h){
				x += ones[j].m;
				j++;
				candyCount++;
				zeroTake = !zeroTake;
				tookOnes = true;
			}
			if(!tookOnes && ! tookZero){
				return candyCount;
			}
		}
		return candyCount;
}

int main() 
{
	//maintain two prioriy queues for each candy type, take the lowest
	//from alternating queues until we can't take anymore candies
	//just take the max we can of the two fronts to begin with
	int n,x;
	cin >> n >> x;
	vector<candy> zeros;
	vector<candy> ones;
	for(int i = 0; i < n;i++){
		int t,h,m;
		cin >> t >> h >> m;
		candy c(h,m);
		if(t){
			ones.push_back(c);
		}else{
			zeros.push_back(c);
		}
	}
	sort(zeros.begin(),zeros.end(), [](candy a, candy b){return a.h < b.h;});
	sort(ones.begin(),ones.end(), [](candy a, candy b){return a.h < b.h;});
	if(zeros[0].m >= ones[0].m){
		//pull from zeros first
		cout << getCandies(zeros,ones,x,true);
	}else{
		//pull from ones first
		cout << getCandies(zeros,ones,x,false);
	}
}
