#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include <string.h>
#include <math.h>
 
using namespace std;
 
 
int main()
{
	int n, a, b;
	cin >> n >> a >> b;
	cout << ((n*a > b) ? b : n*a) << endl;
 
	return 0;
}