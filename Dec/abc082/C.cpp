#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include <string.h>
#include <math.h>
#include <unordered_map>
using namespace std;
 
unordered_map<int, int> a;
 
int main()
{
	int n,tmp,count=0;
 
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		int c = 1;
		if (a.find(tmp) != a.end())c = a[tmp]+1;
		a[tmp] = c;
	}
 
	for (unordered_map<int, int>::iterator it=a.begin(); it != a.end(); ++it) {
		int f=it->first, s=it->second;
 
		if (f > s) count += s;
		if (f < s) count += (s - f);
	}
 
	cout << count << endl;
 
	return 0;
}