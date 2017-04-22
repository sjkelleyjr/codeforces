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
	int n, k, x;
	cin >> n >> k >> x;
	vector<int> balls(n);
	for(int i = 0; i< n;i++){
		int ball;
		cin >> ball;
		balls[i] = ball;
	}
	//iterate the balls and keep track of places you can put 1 ball
	int j = 0;
	int maxPoints = 0;
	for(int i = 0; i < n;i++){
		int pointCount = 0;
		while(i < n-1 && balls[i] == balls[i+1]) i++;
		if(balls[i] == x){
			int dist = i - j + 1;
			//we can place a ball here
			if(dist >= 2){
				//count it's points
				pointCount += dist;
				int oldI = i;
				int oldJ = j;
				int thesePoints = 0;
				do{
					int ii = oldI+1;
					int jj = oldJ-1;
					//step through the balls outside of it
					while(balls[jj] == balls[ii]){
						if(jj != 0){
							jj--;
						}
						if(ii != balls.size()){
							ii++;
						}
					}
					//cout << ii << " " << oldI+1 << " " << oldJ << " " << jj << endl;
					thesePoints = (ii-(oldI+1)) + (oldJ-jj);
					//enough to add points
					if(thesePoints >= 3){
						//cout << "these points " << thesePoints << endl;
						pointCount += thesePoints;
					}
					if(jj == 0 && ii == balls.size()) break;
					oldI = ii;
					oldJ = jj;
				//if they're sufficient, then count the next color
				}while(thesePoints >= 3);
			}
		}
		//take the max over all points
		maxPoints = max(maxPoints, pointCount);
		j = i+1;
	}
	cout << maxPoints << endl;
}
