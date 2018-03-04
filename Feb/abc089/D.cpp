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


typedef long long ll;
int h, w, d, q;
unordered_map<int, pair<int, int>> um;
unordered_map<ll, int> mem;
vector<int> ans;


int rec(int l, int r) {
	if (l == r) return 0;

	ll  p = l * 1000000 + r, t;
	if (mem.find(p) != mem.end())return mem[p];

	int lb = l + d;
	t=abs(um[l].first - um[lb].first) + abs(um[l].second - um[lb].second);
	if (l + lb != r)t += rec(lb, r);
	mem.emplace(p, t);

	return t;
}



int main()
{
	cin >> h >> w >> d;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w ;j++) {
			int t;
			cin >> t;
			um.emplace(t, make_pair(i, j));
		}	
	}

	cin >> q;
	for (int i = 0; i < q; i++) {
		int l, r, t=0;
		cin >> l >> r;
		t = rec(l, r);

		ans.push_back(t);
	}

	for (auto it = ans.begin(); it != ans.end(); it++)
		cout << *it << endl;

	return 0;
}
