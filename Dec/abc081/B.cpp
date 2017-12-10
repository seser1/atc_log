#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include <string.h>
#include <math.h>
 
using namespace std;
 
 
int n, a[200],c=0;
 
bool ne() {
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			a[i] /= 2;
		}
		else {
			return false;
		}
	}
	return true;
}
 
 
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
 
	while (ne())c++;
 
	cout << c << endl;
 
	return 0;
}