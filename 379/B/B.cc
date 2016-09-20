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


int findClosest(int index,int arr[],int n){
	int upper = -1;
	int lower = -1;
	if(index < n){
		for(int i =  index+1;i < n; i++){
			if(arr[i] != 0){
				upper = i;
				break;
			}
		}
	}
	if(index > 0){
		for(int i = index-1; i >= 0;i--){
			if(arr[i] != 0){
				lower = i;
				break;
			}
		}
	}
	//if there aren't any left, check arr[index]
	if(upper != -1 && lower != -1){
		if((upper-index) < (index-lower)){
			return upper;
		}else{
			return lower;
		}
	}else if(upper != -1){
		return upper;
	}else if(lower != -1){
		return lower;
	}else{
		if(arr[index] != 0){
			return index;
		}
	}
	//-1 means everything is 0'd out.
	return -1;
}


int main() 
{
	int n;
	cin >> n;
	int arr[n];
	string robot;
	for(int i =0 ;i<n;i++){
		int a;
		cin >> a;
		arr[i] = a;
	}

	//SETTING UP DFS FOR THIS PROBLEM.
	queue<int> q;
	q.push(0);
	string inst;
	while(!q.empty()){
		//find the next node to visit (nonzero)
		//decrement it, then push if it's nonzero push it to the queue.
		int front = q.front();
		q.pop();
		if(arr[front] > 0){
			inst += 'P';
			arr[front]--;	
		}
		int close = findClosest(front,arr,n);
		if(close == -1){
			break;
		}
		if(close > front){
			int dist = close-front;
			for(int i = 0; i < dist;i++){
				inst+='R';
			}
		}else if(close < front){
			int dist = front-close;
			for(int i = 0; i < dist;i++){
				inst+='L';
			}
		}else{
			//cout << "we need to go left then right, then P" << endl;
			//need to check if this is a valid move first though
			if(front == 0){
				inst+="RL";
			}else{
				inst+="LR";
			}
		}
		q.push(close);
	}
	cout << inst << endl;
}

