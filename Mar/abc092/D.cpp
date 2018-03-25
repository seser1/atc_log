#include<iostream>
#include <iomanip>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
#include<math.h>
#include<unordered_map>
#include <deque>
using namespace std;


typedef long long ll;

int ans[100][100] = {};

void putw(int i) {
	i--;
	int j = (int)(i / 50);
	i=i%50;

	ans[i * 2 ][j * 2 + 1] = 1;
	ans[i * 2 + 1][j * 2 + 1] = 1;
	ans[i * 2 + 1][j * 2] = 1;
}

void putb(int i) {
	i--;
	int j = (int)(i / 50);
	i = (i % 50);

	ans[i * 2][100- j * 2 - 1] = 1;
}

int main()
{
	int a, b;

	cin >> a >> b;

	a--;
	if (a > 0) {
		for (int i = 0; i < a; i++) {
			putw(i + 1);
		}
		b--;
	}

	if (b > 0) {
		for (int i = 0; i < b; i++) {
			putb(i + 1);
		}
	}

	cout << "100 100" << endl;

	for (int i = 0; i < 100; i++) {
		string s;
		for (int j = 0; j < 100; j++) {
			s += (ans[i][j] == 1) ? "#" : ".";
		}

		cout << s << endl;
	}


	return 0;
}
