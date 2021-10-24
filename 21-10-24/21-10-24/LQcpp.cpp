//#include <iostream>
//#include <Windows.h>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//typedef long long LL;
//int main()
//{
//	LL n=2021041820210418;
//	//cin >> n;
//	vector<LL> d;
//	for (LL i = 1; i*i <= n; i++){
//		if (n%i == 0){
//			d.push_back(i);
//			if (n / i != i){
//				d.push_back(n / i);
//			}
//		}
//	}
//	int res = 0;
//	for (auto a : d){
//		for (auto b : d){
//			for (auto c : d){
//				if (a*b*c == n){
//					res++;
//				}
//			}
//		}
//	}
//	cout << res << endl;
//   system("pause");
//	return 0;
//}


//最短路径
#include <iostream>
#include <string>
#include <Windows.h>
#include <algorithm>
using namespace std;
const int N = 2200, M = N * 50;

int n;
int h[N], e[M], w[M], ne[M], idx;
int q[N], dist[N];
bool st[N];

int gcd(int a, int b)
{
	return b ? gcd(b, a%b) : a;
}
void add(int a, int b, int c)  // 添加一条边a->b，边权为c
{
	e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx++;
}

void spfa()  // 求1号点到n号点的最短路距离
{
	int hh = 0, tt = 0;
	memset(dist, 0x3f, sizeof dist);
	dist[1] = 0;
	q[tt++] = 1;
	st[1] = true;
	while (hh != tt)
	{
		int t = q[hh++];
		if (hh == N) hh = 0;
		st[t] = false;

		for (int i = h[t]; i != -1; i = ne[i])
		{
			int j = e[i];
			if (dist[j] > dist[t] + w[i])
			{
				dist[j] = dist[t] + w[i];
				if (!st[j])     // 如果队列中已存在j，则不需要将j重复插入
				{
					q[tt++] = j;
					if (tt == N) tt = 0;
					st[j] = true;
				}
			}
		}
	}
}

int main()
{
	n = 2021;
	memset(h, -1, sizeof(h));
	for (int i = 1; i <= n; i++){
		for (int j = max(1, i - 21); j <= min(n, i + 21); j++){
			int d = gcd(i, j);
			add(i, j, i*j / d);
		}
	}
	spfa();
	printf("%d\n", dist[n]);
	system("pause");
	return 0;
}