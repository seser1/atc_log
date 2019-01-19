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


int main()
{
	int n;
	vector<ll> ar;

	cin >> n;
	for (int i = 0; i < n; i++) {
		ll a;
		cin >> a;
		ar.push_back(a);
	}
	sort(ar.begin(), ar.end());

	ll ai = ar[n-1], aj;
	double ha = (double)ai / 2.,t=(double)ai;
	for (int i = 0; i < n; i++) {
		double  tt = (double)ar[i] - ha;
		if (tt < 0) tt = -tt;
		if (t > tt ){
			t = tt;
			aj = ar[i];
		}
	}

	cout << ai << " " << aj << endl;

	return 0;
}
