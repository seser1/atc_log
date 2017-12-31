#include<iostream>
#include<string>
#include<algorithm>
#include <map>  
 
using namespace std;
 
 
int h, w, S[51][51] = {};
 
void change(int i, int j) {
	if (i >= 0 && j >= 0 && i <= w && j <= h) {
		S[i][j]++;
	}
}
 
int main()
{
 
	cin >> h >> w;
 
	for (int i = 0; i < h; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < w; j++) {
			char c = s[j];
			if (c == '#') {
				S[j][i] = -100;
				for (int k = -1; k < 2; k++) {
					for (int l = -1; l < 2; l++) {
						if(k != 0 || l != 0)
							change(j + k, i + l);
					}
				}
			}
		}
	}
 
 
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			int t = S[j][i];
			if (t >= 0)
				cout << t;
			else
				cout << '#';
		}
		cout << endl;
	}
	
 
	return 0;
}
 
 