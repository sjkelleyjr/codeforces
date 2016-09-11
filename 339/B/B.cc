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
	uint64_t n,m;
	cin >> n >> m;
	//uint64_t tasks[m];
	priority_queue<uint64_t,vector<uint64_t>,std::greater<uint64_t>> tasks;
	int houses[n];
	for(int i = 0; i<m;i++){
		uint64_t task;
		cin >> task;
		tasks.push(task);
		houses[task]++;
	}
	int currHouse = 1;
	int time = 0;
	while(!tasks.empty()){
		uint64_t t = tasks.top();
		tasks.pop();
		if(currHouse <= t){
			time += t-currHouse;
		}else{
			time += n-t+currHouse;
		}
		currHouse = t;
	}
	cout << time << endl;
}

