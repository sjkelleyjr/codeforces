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

void insert(int i, int num, vector<int> &A){
	while(i < A.size()){
		A[i] += num;
		i |= i + 1;
	}
}

int query(int i, vector<int> &A){
	int sum = 0;
	while(i >= 0){
		sum += A[i];
		i &= i+1;
		i--;
	}
	return sum;
}

class seg{
public:
	int l,r,i,x,cnt;
	seg(int l,int r, int i){
		this->l = l;
		this->r = r;
		this->i = i;
	}
	seg(){}
};


int main() 
{
	int n;
	cin >> n;
	vector<seg> lines(n);
	for(int i = 0; i< n;i++){
		int l, r;
		cin >> l >> r;
		seg s(l,r,i);
		lines[i] = s;
	}
	vector<int> fTree(n,0);
	//first sort on r coords so we can query for all r's less than this r
	sort(lines.begin(),lines.end(), [](seg a, seg b)->bool {return a.r < b.r;});
	//store this ordering in the segment class
	for(int i = 0; i<n;i++){
		lines[i].x = i;
	}
	//now sort on reversed l coords
	sort(lines.begin(),lines.end(), [](seg a, seg b)->bool{return a.l > b.l;});
	for(int i = 0; i< n;i++){
		lines[i].cnt = query(lines[i].x,fTree);
		insert(lines[i].x, 1,fTree);
	}
	//sort on original order for output
	sort(lines.begin(),lines.end(), [](seg a, seg b)->bool{return a.i < b.i;});	
	for(auto i: lines){
		cout << i.cnt << endl;
	}

	//initial idea is to sort, iterate from the back for the right coordinate
	//then store this answer in the mapped vector, and add this line to the fenwick tree.
	//vector<long long> fTree(maxRight+1,0);
	//for(long long i = lines.size()-1;i >=0;i--){
	//	pair<long long, long long> line = lines[i];
	//	long long segSum = query(line.second, fTree);
	//	ans[m[line]] = segSum;
	//	insert(line.second, 1, fTree);
	//}
	//for(auto i: ans){
	//	cout << i << endl;
	//}
}
