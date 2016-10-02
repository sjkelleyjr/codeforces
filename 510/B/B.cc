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




bool dfs(int i, int j, vector<vector<char> >  arr, vector<vector<bool> >& visited){
	char curr = arr[i][j];	
	char up   = arr[i-1][j]; //up
	char down = arr[i+1][j]; //down
	char left = arr[i][j-1]; //left
	char right= arr[i][j+1]; //right
	visited[i][j] = true;
	cout << "curr: " << curr << " u: " << up << " d: " << down << " l: " << left << " r: " << right << endl;
	bool u = false;
	bool d = false;
	bool l = false;
	bool r = false;
	return false;
	if(up == curr && !visited[i-1][j]){
		u = dfs(i-1,j,arr,visited);
	}
	if(down == curr && !visited[i+1][j]){
		d = dfs(i+1,j,arr,visited);
	}
	if(left == curr && !visited[i][j-1]){
		l = dfs(i,j-1,arr,visited);
	}
	if(right == curr && !visited[i][j+1]){
		r = dfs(i,j+1,arr,visited);
	}
	return(u || d || l || r);
}


int main() 
{

	int n,m;
	vector<vector<char> > arr(n+10, vector<char>(m+10));
	cin >> n >> m;
	vector<vector<bool> > visited(n+10,vector<bool>(m+10));
	for(int i =0 ; i<n+1;i++){
		for(int j =0 ; j < m+1;j++){
			arr[i][j] = '.'; //outside the board.
			visited[i][j] = false;
		}
		//cout << endl;
	}
	for(int i =0 ; i<n;i++){
		for(int j =0 ; j < m;j++){
			char c;
			cin >> c;
			arr[i+1][j+1] = c;
		}
	}
	//for all items in the array, dfs, if we get back to ourself print YES, at the end print NO
	for(int i =0 ; i<n;i++){
		for(int j =0 ; j < m;j++){
			bool t = dfs(i+1,j+1,arr,visited);
			if(t){
			      cout << "Yes" << endl;
			      return 0;
			}
		}
	}
	cout << "NO" << endl;
}

