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
	long long k;
	cin >> n >> k;
	vector<string> sequence;
	sequence.push_back("1");
	queue<int> q;
	//load the q with the next number
	//save the current string in the vector
	//put the number in the back of the vector
	//put the previously stored string after the number
	//at the end, return the k-1 element in the vector
	for(char i = 2; i<= 50;i++){
		q.push(i);
	}
	for(int i = 0; i< n;i++){
		vector<string> front(sequence);
		string qFront = to_string(q.front());
		sequence.push_back(qFront);
		q.pop();	
		for(auto c : front){
			sequence.push_back(c);
		}
	}
	cout << sequence[k-1] << endl;
}
