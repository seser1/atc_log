#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include <string.h>
#include <math.h>

using namespace std;

vector<int> n;
string ans = "";

void df(int c, int sum, string s) {
	if (ans != "") return;
	if (c == n.size()) {
		if (sum == 7)ans = s;
		return;
	}
	df(c + 1, sum + n[c], s + "+" + std::to_string(n[c]));
	df(c + 1, sum - n[c], s + "-" + std::to_string(n[c]));
	return;
}

int main()
{
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++) n.push_back(s[i] - '0');
	df(1, n[0], std::to_string(n[0]));
	cout << ans << "=7" << endl;

	return 0;
}