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


const long long NUMLINES = 1000000;


bool checkCorner(long long x, long long y,long long n, long long m){
	if((x == n && y == m) || (x == n && y == 0) || (x == 0 && y ==m)){
		return true;	
	}
	return false;
}


bool inBeam(long long a_x, long long a_y, long long b_x, long long b_y, long long c_x, long long c_y){
	double cross = (c_y - a_y) * (b_x - a_x) - (c_x - a_x)*(b_y-a_y);
	if((abs(cross) > .1)){
		return false;
	}
	double dot =  (c_x - a_x) * (b_x - a_x) + (c_y - a_y) * (b_y - a_y);
	if(dot < 0){
		return false;
	}
	double sqLength = (b_x -a_x)*(b_x-a_x) + (b_y-a_y)*(b_y-a_y);
	if(dot > sqLength){
		return false;
	}
	return true;
}

void genBeam(long long lastX, long long lastY, long long x, long long y, long long n, long long m){
	//gen sum
	//when we go up we want the sum, when we go down we want the diff.
	//gen diff
}


int main() 
{
	long long n,m,k;
	cin >> n >> m >> k;
	//array of coordinates
	long long arr[k][2];
	//long long beams[NUMLINES][2];
	vector<long long> sensorIndexes;
	for(long long i = 0; i < k; i++){
		long long x,y;
		cin >> x >> y;
		arr[i][0] = x;
		arr[i][1] = y;	
	}
	//the first beam...
	long long x = 3;
	long long y = 3;
	long long lastX = 0;
	long long lastY = 0;
		
	//create a new beam
	//if(checkCorner(x,y,n,m)){
	//	break;
	//}
	////check all of our sensors with this new beam
	//for(long long i = 0; i< k ;i++){
	//	cout << inBeam(lastX,lastY,x,y,arr[i][0],arr[i][1]) << endl;
	//	//cout << checkCorner(x,y,n,m) << endl;
	//	cout << arr[i][0] << " " << arr[i][1] << endl;
	//}
	//if this new beam is a corner, we're done.
}

