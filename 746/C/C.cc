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
	//if igor is faster than the train, always just walk
	//else calc time to get there using igors speed and the trains speed
	//if the train is fast return its value, else igors
	int s,x_1,x_2;
	cin >> s >> x_1 >> x_2;
	int t_1, t_2;
	cin >> t_1 >> t_2;
	int p,d;
	cin >> p >> d;
	//igor is faster than the train
	if(t_2 <= t_1){
		cout << t_2 * abs(x_2 - x_1) << endl;
	}else{
		int igorTime = t_2 * abs(x_2-x_1);
		int firstTime = 0;
		if(x_1 < x_2){
			if(p <= x_1 && d == 1){
				firstTime = x_2-p;
			}else if(d == 1){
				firstTime = s-p + s + x_2;
			}else{
				firstTime = p + x_2;
			}
		}else{
			if(p >= x_1 && d == -1){
				firstTime = p-x_2;
			}else if(d == -1){
				firstTime = p + s + s-x_2;
			}else{
				firstTime = s-p+s-x_2;
			}
		}
		//if((p < x_1 && d) || (p > x_1 && !d)){
		//	firstTime = t_1 * abs(x_1 - p);
		//}else if(p > x_1){
		//	firstTime = (s-p)*t_1 + (s-x_1)*t_1;
		//}else if(p < x_1){
		//	firstTime = p*t_1 + x_1*t_1;
		//}

		cout << min(igorTime, firstTime*t_1) << endl;	
	
	}


}
