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


//need to count the number of each element here
//we still need 2 x's and I haven't found two x's
bool checkWin(vector<string>grid, int row, int col){
	bool up = true;
	int upCount = 0;
	bool down = true;
	int downCount = 0;
	bool left = true;
	int leftCount = 0;
	bool right = true;
	int rightCount = 0;
	bool downright = true;
	int DRCount = 0;
	bool downleft = true;
	int DLCount = 0;
	bool upright = true;
	int URCount = 0;
	bool upleft = true;
	int ULCount = 0;
	for(int i = 0; i < 3; i++){
		//cout << grid[row+i][col+i] << endl;
		if(grid[row+i][col] == 'x') downCount++;
		if(grid[row+i][col] == 'o') down = false;
		if(grid[row-i][col] == 'x') upCount++;
		if(grid[row-i][col] == 'o') up = false;
		if(grid[row][col+i] == 'x') rightCount++;
		if(grid[row][col+i] == 'o') right = false;
		if(grid[row][col-i] == 'x') leftCount++;
		if(grid[row][col-i] == 'o') left = false;
		if(grid[row+i][col+i] == 'x') DRCount++;
		if(grid[row+i][col+i] == 'o') downright = false;
		if(grid[row+i][col-i] == 'x') DLCount++;
		if(grid[row+i][col-i] == 'o') downleft = false;	
		if(grid[row-i][col+i] == 'x') URCount++;
		if(grid[row-i][col+i] == 'o') upright = false;
		if(grid[row-i][col-i] == 'x') ULCount++;
		if(grid[row-i][col-i] == 'o') upleft = false;
	}
	//cout << DRCount << "  " << downright << endl;
	return (downCount>1&&down) || (upCount>1&&up) || (rightCount>1&&right)||(leftCount>1&&left)||(DRCount > 1 && downright)
		|| (DLCount>1&&downleft) || (URCount>1&&upright) || (ULCount > 1 && upleft);
}

int main() 
{
	vector<string> grid(10);
	for(int i = 0; i< grid.size();i++){
		grid[i] = "ooo";
	}
	for(int i = 3; i <= 6;i++){
		string s;
		cin >> s;
		grid[i] += s;
		grid[i] += "ooo";	
	}
	grid[0] = "oooooooooo";
	grid[1] = "oooooooooo";
	grid[2] = "oooooooooo";
	grid[7] = "oooooooooo";
	grid[8] = "oooooooooo";
	grid[9] = "oooooooooo";
	
	for(int i = 3; i <= 6;i++){	
		for(int j = 3; j <= 6;j++){
			if(checkWin(grid,i,j)){
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
}
