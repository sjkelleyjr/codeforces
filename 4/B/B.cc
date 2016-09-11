// Create your own template by modifying this file!
#include <bits/stdc++.h>
#include <array>
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
	int numDays,totalHours, minTime, maxTime;
	cin >> numDays;
	cin >> totalHours;
	int days[numDays+1];
	pair<int,int> diff[numDays+1];
	for(int i = 0; i< numDays;i++){
		days[i] = 0;
	}
	for(int i = 0; i< numDays;i++){
		cin >> minTime;
		cin >> maxTime;
		pair<int,int> p(minTime,maxTime);
		diff[i] = p;
		if(totalHours == 0){
			break;
		}
		if(totalHours < minTime){
			continue;
		}
		days[i] = minTime;
		totalHours -= minTime;
		//else if(totalHours < maxTime){
		//	days[i] = totalHours;
		//	totalHours = 0;
		//	break;
		//}else{
		//	days[i] = maxTime;
		//	totalHours -= maxTime;
		//}
	}
	if(totalHours > 0){
		for(int i = 0; i< numDays;i++){
			if(totalHours == 0) break;
			else if(totalHours <= (diff[i].second - diff[i].first)){
				days[i] += totalHours;
				break;
			}else{
				days[i] += diff[i].second - diff[i].first;
				totalHours -= diff[i].second - diff[i].first;
			}
		}
		if(totalHours > 0){
			cout << "NO";
		}else{
			cout << "YES" << endl;
			for(int i = 0; i<numDays;i++){
				cout << days[i] << " ";
			}
		}
	}
}

