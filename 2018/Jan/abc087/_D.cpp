#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<string.h>
#include<math.h>

using namespace std;

bool flag = true;


struct NODE {
	int x = 0;
	bool vis = false;

	//pair: opposite, distance
	vector<pair<int, int>> inf;
} node[200000];

void dfs(int ne, int x) {
	if (node[ne].vis) {
		if (node[ne].x != x)flag = false;
	}
	else {
		node[ne].vis = true;
		node[ne].x = x;
		for (auto it = node[ne].inf.begin(); it != node[ne].inf.end(); it++)
			dfs((*it).first, x + (*it).second);
	}
}

int main()
{
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int l, r, d;
		cin >> l >> r >> d;
		node[l].inf.push_back(pair<int, int>(r, d));
		node[r].inf.push_back(pair<int, int>(l, -d));
	}

	for (int i = 0; i < n; i++) 
		if(!node[i].vis)dfs(i, 0);

	cout << (flag ? "Yes" : "No") << endl;

	return 0;
}
