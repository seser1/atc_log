#include<iostream>
#include<string>
#include<algorithm>
#include <map>  
#include <string.h>
#include <math.h>
 
using namespace std;
 
int t[10], c[10][10];
int h, w;
bool u[10];
 
 
int main()
{
	int sum = 0;
 
	fill(u, u + 10, false);
	fill(t, t + 10, 100000);
 
	u[1] = true;
	t[1] = 0;
 
	cin >> h >> w;
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			cin >> c[i][j];
 
 
	for (int k = 0; k < 9; k++) {
		int m = 1000000, n;
		for (int i = 0; i < 10; i++) {
			if (u[i] == false) {
				for (int j = 0; j < 10; j++) {
					if (i != j && c[i][j] + t[j] < m) {
						m = c[i][j] + t[j];
						n = i;
					}
				}
			}
		}
		t[n] = m;
		u[n] = true;
	}
 
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < h; j++) {
			int in;
			cin >> in;
			if(in != -1)
				sum += t[in];
		}
	}
 
	cout << sum << endl;
 
	return 0;
}
