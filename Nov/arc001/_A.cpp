#include<iostream>
#include<string>
#include<algorithm>
#include <map>  
#include <string.h>
#include <math.h>

using namespace std;

int n, s[4] = {}, M, m;
string in;

int main()
{	
	cin >> n >> in;

	for (int i = 0; i < n; i++) s[in[i] - '0' -1]++;

	M = m = s[0];
	for (int i = 1; i < 4; i++) {
		if (M < s[i])M = s[i];
		if (m > s[i])m = s[i];
	}

	cout << M << " " << m << endl;

	return 0;
}