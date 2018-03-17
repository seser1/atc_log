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



int n, ma=0;

struct POINT {
	int a;
	int b;

	int sum;

	bool operator<(const POINT& right) const {
		return sum < right.sum;
	}
};
vector <POINT> red, blue;


int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		POINT p;
		cin >> a >> b;
		p.a = a;
		p.b = b;
		p.sum = a + b;
		red.push_back(p);
	}
	for (int i = 0; i < n; i++) {
		int c, d;
		POINT p;
		cin >> c >> d;
		p.a = c;
		p.b = d;
		p.sum = c + d;
		blue.push_back(p);
	}

	sort(red.begin(), red.end());
	sort(blue.begin(), blue.end());

	int num = 0;
	for (auto itr = red.end(); itr != red.begin(); ) {
		itr--;
		for (auto itb = blue.begin(); itb != blue.end(); itb++) {
			POINT r = *itr;
			POINT b = *itb;
			if (r.a < b.a && r.b < b.b) {
				num ++;
				blue.erase(itb);
				break;
			}
		}
	}

	cout << num << endl;

	return 0;
}
