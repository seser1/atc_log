#include<iostream>
#include <iomanip>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
#include<math.h>
#include<unordered_map>
#include <deque>
using namespace std;



int n, ma=0;
int t[100][100] = {};
vector<pair<int, int>> red;
vector<pair<int, int>> blue;



void dfs(bool ab[200],int num) {
	if (ma == n) return;
	if (ma < num)ma = num;

	for (int i = 0; i < n; i++) {
		for (int j = 0; ab[i] &&(j < n); j++) {
			if (ab[n+j] && t[i][j] == 1) {
					bool _ab[200];
					memcpy(_ab, ab, sizeof(bool)*200);
					_ab[i] = false;
					_ab[n+j] = false;

					dfs(_ab, num +1);
			}
		}
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		red.push_back(pair<int, int>(a,b));
	}
	for (int i = 0; i < n; i++) {
		int c, d;
		cin >> c >> d;
		blue.push_back(pair<int, int>(c, d));
	}

	int i=0;
	for (auto itr = red.begin(); itr != red.end(); itr++,i++) {
		int j = 0;
		for (auto itb = blue.begin(); itb != blue.end(); itb++,j++) {
			pair<int, int> r = *itr;
			pair<int, int> b = *itb;
			if (r.first < b.first && r.second < b.second)t[i][j] = 1;
			else t[i][j] = 0;
		}
	}

	/*
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << t[i][j];
		}
		cout << endl;
	}*/

	bool ab[200];
	for (int i = 0; i < 200; i++)ab[i] = true;

	dfs(ab, 0);

	cout << ma << endl;

	return 0;
}
