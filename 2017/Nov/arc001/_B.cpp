#include<iostream>
#include<string>
#include<algorithm>
#include <map>  
#include <string.h>
#include <math.h>

using namespace std;

int A, B, c=0;

void n(int i) {
	i = abs(i);
	if (i == 0)return;
	c++;
	if (i >= 8) n(i - 10); 
	else if (i >= 3) n(i - 5);
	else n(i - 1);
}

int main()
{	
	cin >> A >> B;
	n(B - A);
	cout << c << endl;

	return 0;
}