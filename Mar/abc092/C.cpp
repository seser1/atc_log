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

int n;
ll sum = 0;

int dif[100001] = {};


int main()
{
	int bef = 0, bb = 0;


	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		sum += abs(a - bef);
		if (i == n - 1)sum += abs(a);

		if (i >= 1) 
			dif[i - 1] = abs(a - bb) - (abs(a - bef) + abs(bef - bb));

		if(i==n-1)
			dif[i] = abs(bef - 0) - (abs(a - 0) + abs(bef - a));
		
		bb = bef;
		bef = a;
	}

	for (int i = 0; i < n; i++) {
		cout << sum + dif[i] << endl;
	}

	return 0;
}
