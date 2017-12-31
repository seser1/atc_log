#include<iostream>
#include<string>
#include<algorithm>
#include <map>  
#include <string.h>
#include <math.h>
 
using namespace std;
 
 
int main()
{	
 
	unsigned long long n, tmp1=1, tmp2=2, tmp;
	cin >> n;
	if (n == 1) {
		cout << "1" << endl;
		return 0;
	}
 
	for (int i = 2; i <= n; i++) {
		tmp = tmp1 + tmp2;
		tmp2 = tmp1;
		tmp1 = tmp;
	}
	cout << tmp << endl;
	return 0;
}