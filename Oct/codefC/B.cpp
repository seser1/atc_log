#include<iostream>
#include<algorithm>
#include<string>
#include <math.h>  
 
 
using namespace std;
 
 
int main()
{
 
	int N, tmp, ans;
 
	cin >> N;
	tmp = 1;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		if (n % 2 == 0) tmp *= 2;
	}
	cout << pow(3, N) - tmp << endl;
	
	return 0;
}
 
 