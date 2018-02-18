#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
#include<math.h>
#include<unordered_map>
#include <deque>
using namespace std;


struct T {
	int t[3];
};

std::deque<T> que;

int ij[4][2] = {{1, 0},{-1, 0},{0, 1},{0, -1}};

int s[50][50] = {};
int h, w, c=0;
int mi = 1000;

int main()
{
	cin >> h >> w;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			char ct;
			cin >> ct;
			if (ct == '.')c++;
			s[i][j]= ct=='.' ? 1000 : 2000;
		}
	}

	s[0][0] = 0;
	T f = { {0,0,0} };

	que.push_back(f);

	while (!que.empty()) {

		T t = que.front();
		que.pop_front();

		int ni=t.t[0], nj=t.t[1], num=t.t[2];


		if (ni == h - 1 && nj == w - 1) {
			mi = min(mi, num);
		}

		for (int i = 0; i < 4; i++) {
			int it = ni + ij[i][0];
			int jt = nj + ij[i][1];

			if (it>=0 && it < h && jt>=0 && jt < w 
				&& s[it][jt] != 2000) {

				T tt;
				tt.t[0]=it;
				tt.t[1]=jt;
				tt.t[2]=num+1;

				if (s[it][jt] > num + 1) {
					s[it][jt] = num + 1;
					que.push_back(tt);
				}
			}
		}
	}


	if (mi == 1000) mi = -1;
	else mi = c - 1 - mi;

	cout << mi << endl;

/*	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (s[i][j] != 1000 && s[i][j] != 2000)cout << s[i][j] << " ";
			else cout << (s[i][j]==1000 ? "." : "#") << " ";
		}
		cout << endl;
	}*/

	return 0;
}
