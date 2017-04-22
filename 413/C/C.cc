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

class question{
public:
	int val, auc;
	question(int val, int auc) : val(val), auc(auc){};
	question(){}
};


int main() 
{
	int n, m;
	cin >> n >> m;
	vector<question> questions(n);
	for(int i = 0; i< n;i++){
		int v;
		cin >> v;
		question q(v, INT_MIN);
		questions[i] = q;
	}
	for(int i = 0; i < m;i++){
		int a;
		cin >> a;
		questions[a].auc = questions[a].val;
	}
	sort(questions.begin(),questions.end(),[](question x, question y){
		return x.auc < y.auc ? -1 : (x.auc > y.auc ? 1 : (x.val < y.val ? -1 : x.val > y.val));
	});
	long long ans = 0;
	for(auto i: questions){
		cout << i.val << " " << i.auc << endl;
		if(i.auc == INT_MIN){
			ans += i.val;
		}else{
			ans += ans;
		}
	}
	cout << ans << endl;
}
