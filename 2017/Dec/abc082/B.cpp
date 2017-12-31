#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include <string.h>
#include <math.h>
 
using namespace std;
 
int c;
vector<char> s, t;
 
int main()
{
	bool ans = true;
	string tmp;
	cin >> tmp;
 
	for (int i = 0; i < tmp.size(); i++)s.push_back(tmp[i]);
	sort(s.begin(), s.end());
 
	cin >> tmp;
	for (int i = 0; i < tmp.size(); i++)t.push_back(tmp[i]);
	sort(t.begin(), t.end());
 
	c = min(s.size(), t.size());
 
	vector<char>::iterator _s, _t;
 
	_s = s.begin();
	_t = t.end();
	--_t;
 
	for (int i = 0; i < c; i++) {
		if (*_s < *_t) break;
		if (*_s > *_t) {
			ans = false;
			break;
		}
		if (_s == s.end()) {
			if (_t == t.begin())ans = false;
			break;
		}
		if (_t == t.begin()) {
			ans = false;
			break;
		}
		++_s;
		--_t;
	}
 
	if (ans) cout << "Yes" << endl;
	else cout << "No" << endl;
 
	return 0;
}