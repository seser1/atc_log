#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include <string.h>
#include <math.h>

using namespace std;

int n;
string s, st;
map<string, string> m;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		st = s;
		for (int j = 0; j < s.size(); j++)st[j] = s[s.size() - j - 1];
		m[st]=s;
	}

	for (auto it = m.begin(); it != m.end(); ++it)
		cout << it->second << endl;
		
	return 0;
}
