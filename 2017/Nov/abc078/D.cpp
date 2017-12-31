#include<iostream>
#include<string>
#include<algorithm>
#include <map>  
#include <string.h>
#include <math.h>
 
using namespace std;
 
int n, z, w, a[2001] = {};
int t1, t2, t3=0;
 
 
int main()
{	
	cin >> n >> z >> w;
 
	for (int i = 0; i < n; i++)cin >> a[i];
 
	if (n == 1) {
		cout << abs(a[0] - w) << endl;
		return 0;
	}
 
	t1 = abs(a[n - 2] - a[n - 1]);
	t2 = abs(a[n - 1] - w);
 
	cout << max(t1, t2) << endl;
 
	return 0;
}