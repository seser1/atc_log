#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include <string.h>
#include <math.h>
 
using namespace std;
 
int n;
int f[100][10] = {}, p[100][11] = {};
long long res = -10000000000;
 
void cal(int *_st) {
	int st[10], c=0;
	for (int i = 0; i < 10; i++) {
		st[i] = _st[i];
		if (st[i] == 1)c++;
	}
	if (c == 0)return;
 
 
	long ret = 0;
	for (int i = 0; i < n; i++) {
		int tmp = 0;
		for (int j = 0; j < 10; j++) 
			if (st[j] == 1 && f[i][j] == 1)tmp++;
		ret += p[i][tmp];
	}
	if (ret > res)res = ret;
}
 
 
void d(int *_st, int no) {
	int st1[10], st2[10];
	for (int i = 0; i < 10; i++) {
		st1[i] = _st[i];
		st2[i] = _st[i];
	}
 
	if (no > 9) {
		cal(st1);
		return;
	}
	d(st1, no+1);
	st2[no] = 1;
	d(st2, no+1);
}
 
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++)
			cin >> f[i][j];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= 10; j++)
			cin >> p[i][j];
	}
 
	int st[10] = {};
	d(st, 0);
	cout << res << endl;
	return 0;
}