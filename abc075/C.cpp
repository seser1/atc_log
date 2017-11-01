#include<iostream>
#include<string>
#include<algorithm>
#include <map>  
#include <string.h>
 
using namespace std;
 
 
int N, M ,sum=0;
int a[50], b[50];
int L[51][51] = {};
 
struct S {
	int l[51][51] = {};
};
 
bool dec(struct S s, int n, int ans) {
	bool flag = false;
 
	for (int i = 1; i <= N; i++) {
		if (n<i && s.l[n][i] == 1 || n>i && s.l[i][n] == 1) {
			if (i == ans)
				return true;
			else {
				if (n > i)
					s.l[i][n] = 0;
				else
					s.l[n][i] = 0;
 
				if (dec(s, i, ans))
					return true;
			}
		}
	}
	return flag;
}
 
 
int main()
{
 
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> a[i] >> b[i];
		if(a[i] > b[i])
			L[b[i]][a[i]] = 1;
		else
			L[a[i]][b[i]] = 1;
	}
 
 
 
	for (int i = 0; i < M; i++) {
		struct S s;
		memcpy(s.l, L, sizeof(L));
 
		if (a[i] > b[i])
			s.l[b[i]][a[i]] = 0;
		else
			s.l[a[i]][b[i]] = 0;
 
		if (!dec(s, a[i], b[i]))
			sum++;
	}
 
	cout << sum << endl;
 
	return 0;
}