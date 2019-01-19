#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
#include<math.h>
#include<unordered_map>
using namespace std;
 
int main()
{
	int n, t=0, x=0, y=0;
	string res = "Yes";
 
	cin >> n;
 
	for (int i = 0; i < n; i++) {
		int tn, xn, yn, tt, xt, yt;
		cin >> tn >> xn >> yn;
 
		tt = tn - t;
		xt = xn - x;
		yt = yn - y;
 
		int sum = abs(xt) + abs(yt);
		if (sum > tt || (tt - sum) % 2 != 0) 
			res = "No";
 
		t = tn;
		x = xn;
		y = yn;
	}
 
	cout << res << endl;
 
	return 0;
}