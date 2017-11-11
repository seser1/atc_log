#include<iostream>
#include<string>
#include<algorithm>
#include <map>  
#include <string.h>
#include <math.h>
 
using namespace std;
 
int n, m, t;
 
int main()
{	
	cin >> n >> m;
 
	t = 1900 * m + 100 * (n - m);
 
	cout << t*(1 / pow(0.5, m)) << endl;
 
	return 0;
}