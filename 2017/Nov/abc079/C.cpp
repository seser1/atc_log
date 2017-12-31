#include<iostream>
#include<string>
#include<algorithm>
#include <map>  
#include <string.h>
#include <math.h>
 
using namespace std;
 
int n[4];
 
int sum(int *p) {
	int tmp = n[0];
	for (int i = 0; i < 3; i++) {
		if (p[i] == 1)tmp += n[i + 1];
		if (p[i] == 0)tmp -= n[i + 1];
	}
	return tmp;
}
 
int main()
{
	string s;
	cin >> s;
 
	char ans[3] = {};
 
	for (int i = 0; i < 4; i++)n[i] = s[i]-'0';
 
 
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				int in[3] = { i,j,k };
				if (sum(in) == 7) {
					for (int l = 0; l < 3; l++) {
						if (in[l] == 1)ans[l] = '+';
						if (in[l] == 0)ans[l] = '-';
					}
				}
			}
		}
	}
 
	cout << s[0];
	cout << ans[0];
	cout << s[1];
	cout << ans[1];
	cout << s[2];
	cout << ans[2];
	cout << s[3];
	cout << "=7" << endl;
 
 
	return 0;
}