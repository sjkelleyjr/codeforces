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

int n,k;
class node{
public:
	int val;
	vector<node*> edges;
	node(){}
	node(int val) : val(val){}
};

void allPairs(vector<node> graph){
}

//distance is the ceil(number of vertices between two vertices divided by k)

//how many paths will include me in it?
//count number of vertices on one side of the edge, multiplied by the number of vertives on the other side of the edge
//the sum of these for each edge will be the answer.


//(this is the same as 766E, base case is n*(n-1)

int main() 
{
	cin >> n >> k;
	vector<node> graph(n);
	int totalVerts = ((n*(n-1))/2);
	cout << totalVerts << endl;
	for(int i = 0; i< n;i++){
		int j,k;
		cin >> j >> k;
		j--;
		k--;
		graph[j].edges.push_back(new node(k));
		graph[k].edges.push_back(new node(j));
	}
}
