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
	int n;
	cin >> n;
	vector<int> A(n);
	vector<pair<int,int> > indices;
	for(int i = 0; i < n;i++){
		int a;
		cin >> a;
		A[i] = a;	
	}
	bool zeros = true;
	int sum = 0;
	for(auto i: A){
		if(i != 0) zeros = false;
		sum += i;
	}
	if(zeros){
		cout << "NO" << endl;
		return 0;
	}
	if(sum != 0){
		cout << "YES" << endl;
		cout << 1 << endl;
		cout << 1 << " " << A.size() << endl;
		return 0;
	}
	sum = A[0];
	int i = 1;
	while(sum == 0){
		sum += A[i];
		i++;
	}
	for(;i < A.size();i++){
		if(sum == 0) break;
		sum += A[i];
	}
	cout << "YES" << endl;
	cout << 2 << endl;
	cout << 1 << " " << i-1 << endl;
	cout << i << " " << A.size() << endl;
}
