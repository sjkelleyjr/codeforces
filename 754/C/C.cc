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


int getID(string s, vector<string> users){
	int pos = lower_bound(users.begin(),users.end(), s) - users.begin();
	if(users[pos] != s) return -1;
	return pos;
}

pair<string,string> makePair(string s){
	size_t pos = s.find(':');
	return {s.substr(0, pos), s.substr(pos + 1)};
}

vector<string> cleanString(string s){
	vector<string> res;
	string t;
	for (auto i : s) {
		if (isalpha(i) || isdigit(i)) {
			t += i;
		}
		else {
			if (!t.empty()) {
				res.push_back(t);
			}
			t.clear();
		}
	}
	if (!t.empty()) {
		res.push_back(t);
	}
	return res;
}


void findUsers() {
	int numUsers;
	cin >> numUsers;
	vector<string> users(numUsers);
	for (string& user : users) {
		cin >> user;
	}
	sort(users.begin(),users.end());

	int numLines;
	cin >> numLines;

	vector<string> msgs(numLines);
	vector<int> whoSaid(numLines);
	vector<vector<char>> messageUserMap(numLines, vector<char>(numUsers, true));
	
	
	string extra;
	getline(cin, extra);

	for (int i = 0; i < numLines; i++) {
		string curr;
		getline(cin, curr);
		pair<string, string> messagePair = makePair(curr);
		string user = messagePair.first;
		string message = messagePair.second;
		whoSaid[i] = getID(user,users);
		if (whoSaid[i] != -1) {
			fill(messageUserMap[i].begin(),messageUserMap[i].end(), false);
			messageUserMap[i][whoSaid[i]] = true;
		}
		msgs[i] = message;
		vector<string> tks = cleanString(message);
		for (auto t : tks) {
			int id = getID(t,users);
			if (id != -1) {
				messageUserMap[i][id] = false;
			}
		}
	}

	vector<vector<int>> ans(numLines, vector<int>(numUsers, -1));
	for (int i = 0; i < numUsers; i++) {
		if (messageUserMap[0][i]) ans[0][i] = 0;
	}
	for (int m = 0; m + 1 < numLines; m++) {
		for (int i = 0; i < numUsers; i++) {
			if (ans[m][i] == -1) continue;
			for (int j = 0; j < numUsers; j++) {
				if (i == j) continue;
				if (messageUserMap[m + 1][j]) {
					ans[m + 1][j] = i;
				}
			}
		}
	}
	int message = numLines - 1, pos = -1;
	for (int i = 0; i < numUsers; i++) {
		if (ans[message][i] != -1) {
			pos = i;
			break;
		}
	}
	if (pos == -1) {
		cout << "Impossible" << endl;
		return;
	}
	while (message >= 0) {
		whoSaid[message] = pos;
		pos = ans[message][pos];
		message--;
	}
	for (int i = 0; i < numLines; i++) {
		cout << users[whoSaid[i]] << ":" << msgs[i] << "\n";
	}
	return;
}

int main() 
{
	int chats;
	cin >> chats;
	for(int i = 0; i < chats;i++){
		findUsers();
	}


}
