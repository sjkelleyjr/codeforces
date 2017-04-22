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
class lady{
public:
	int B,I,R,i,r;
	lady(){}
};

int query(vector<int>&fTree, int i){
	int MAX =0;
	while(i >= 0){
		MAX = max(MAX,fTree[i]);
		i &= i+1;
		i--;	
	}
	return MAX;
}

void update(vector<int>&fTree, int i, int num){
	while(i < fTree.size()){
		fTree[i] = max(fTree[i],num);
		i |= i+1;
	}
}


int main() 
{
	int n;
	cin >> n;
	vector<lady> ladies(n);
	for(int i = 0; i< n;i++){
		lady l;
		int b;
		cin >> b;
		l.B = b;
		ladies[i] = l;
	}
	string s;
	getline(cin,s);
	for(int i = 0; i< n;i++){
		int I;
		cin >> I;
		ladies[i].I = I;
	}
	getline(cin,s);
	for(int i = 0; i< n;i++){
		int R;
		cin >> R;
		ladies[i].R = R;
	}
	
	sort(ladies.begin(),ladies.end(),[](lady a, lady b)->bool{return a.R < b.R;});
	ladies[0].r = 1;
	for(int i = 1; i< n;i++){
		ladies[i].r = ladies[i-1].r + (ladies[i].R == ladies[i-1].R ? 0 : 1);
	}

	sort(ladies.begin(),ladies.end(),[](lady a, lady b)->bool{return a.I > b.I;});
	ladies[0].i = 1;
	//this is the same as the b variable with the walruses
	//ie, the age ranking, in this case we're I ranking the ladies
	for(int i = 1; i< n;i++){
		ladies[i].i = ladies[i-1].i + (ladies[i].I == ladies[i-1].I ? 0 : 1);
	}
	vector<int> fTree(ladies[n-1].i+1);
	//sort the ladies on beauty
	sort(ladies.begin(),ladies.end(),[](lady a, lady b)->bool{return a.B > b.B;});
	int count = 0;
	for(int i = 0,j; i< n;i=j){
		for(int j = i; j < n && ladies[j].B == ladies[i].B;j++){
			if(query(fTree, ladies[j].i -1) > ladies[j].r)
				count++;
		}
		for(int j = i; j < n && ladies[j].B == ladies[i].B;j++){
			update(fTree, ladies[j].i, ladies[j].r);
		}
	}
	cout << count << endl;

}
