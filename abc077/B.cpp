#include<iostream>
#include<string>
#include<algorithm>
#include <map>  
#include <string.h>
#include <math.h>
 
using namespace std;
 
 
 
 
int main()
{
 
	int n, r;
 
	cin >> n;
	r = (int)pow((double)n, 0.5);
 
	cout << (int)pow(r, 2) << endl;
 
	return 0;
}