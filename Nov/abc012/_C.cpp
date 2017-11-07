#include<iostream>
#include<string>
#include<algorithm>
#include <map>  
#include <string.h>
#include <math.h>
 
using namespace std;
 
int n, sum=0, dif;
 
int main()
{	
	cin >> n;
 
	for (int i = 1; i <= 9; i++)
		for (int j = 1; j <= 9; j++)
			sum += i*j;
	dif = sum - n;
 
	for (int i = 1; i <= 9; i++)
		if (dif%i == 0 && dif/i <=9) 
			cout << i << " x " << dif / i << endl;
 
	return 0;
}