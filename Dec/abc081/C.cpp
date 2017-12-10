#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include <string.h>
#include <math.h>
#include <unordered_map>
 
 
using namespace std;
 
 
int n, k, a[200000], at;
 
std::unordered_map<int, int> um;
vector<int> v;
 
int main()
{
	int tmp;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> at;
		auto no = um.find(at);
		if (no == um.end()) {
			um.emplace(at, 1);
		}
		else {
			no->second ++;
		}
	}
 
	for (auto it = um.begin(); it != um.end(); ++it) {
		v.push_back(it->second);
	}
 
 
	tmp = 0;
	sort(v.begin(), v.end());
 
	for (int i = v.size(); i > k; i--) {
		tmp+= v[v.size()-i];
	}
 
	cout << tmp << endl;
 
	return 0;
}